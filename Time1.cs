// Author: Steven Villano
// Date completed: July 16, 2015
// Filename: Time1.cs

// Purpose: Use extension methods to extend class Time of Fig. 10.1 to provide the Tick method
// that increments the time stored in a Time object by one second. Also provide method IncrementMinute
// to increment the minute and method IncrementHour to increment the hour. The Time object should always
// remain in a consistent state. The Tick method, the IncrementMinute method and the IncrementHour method 
// should be called when you click the Add 1 to second button, the Add 1 to minute button, and the Add 1 to hour
// button, respectively.

using System; // namespace containing ArgumentOutOfRangeException

public class Time1
{
   private int hour; // 0 - 23
   private int minute; // 0 - 59
   private int second; // 0 - 59

   // set a new time value using universal time; throw an 
   // exception if the hour, minute or second is invalid
   public void SetTime( int h, int m, int s )
   {
      // validate hour, minute and second
      if ( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) && 
         ( s >= 0 && s < 60 ) ) 
      {
         hour = h;
         minute = m;
         second = s;
      } // end if
      else
         throw new ArgumentOutOfRangeException();
   } // end method SetTime
   
   // set the hour separately from other instance variables
   public void setHour( int h )
   {
        hour = ( ( h >= 0 && h < 24 ) ? h : 0 );  // validate hours 0 - 23
   }  // end method setHour

   // set the minutes separately from the other instance variables
   public void setMinute( int m )
   {
        minute = ( ( m >= 0 && m < 60 ) ? m : 0 );  // validate minutes 0 - 60
   }  // end method setMinute

   // set the seconds separately from the other instance variables
   public void setSecond( int s )
   {
        second = ( ( s >= 0 && s < 60 ) ? s : 0 );  // validate seconds 0 - 60
   }  // end method setSecond

   // method to retrieve hour
   public int getHour()
   {
        return hour;  // return hour
   }  // end method getHour

   // method to retrieve minute
   public int getMinute()
   {
        return minute;  // return minute
   }  // end method getMinute

   // method to retrieve second
   public int getSecond()
   {
        return second;  // return second
   }  // end method getSecond

   // convert to string in universal-time format (HH:MM:SS)
   public string ToUniversalString()
   {
      return string.Format( "{0:D2}:{1:D2}:{2:D2}",
         hour, minute, second );
   } // end method ToUniversalString

   // convert to string in standard-time format (H:MM:SS AM or PM)
   public override string ToString()
   {
      return string.Format( "{0}:{1:D2}:{2:D2} {3}",
         ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ),
         minute, second, ( hour < 12 ? "AM" : "PM" ) );
   } // end method ToString

   // increment seconds by one
   public void Tick()
   {
        setSecond( second + 1 );  // set second with incremented value

        // if second is equal to 0, then increment the minutes
        if( second == 0 )
        {
             IncrementMinute(); 
        }  // end if
   }  // end method Tick


   // increment minutes by one
   public void IncrementMinute()
   {
        setMinute( minute + 1 );  // set minute with incremented value

        // if minute is equal to 0, then increment the hours
        if( minute == 0 )
        {
             IncrementHour();
        }  // end if
   }  // end method IncrementMinute

   // increment hours by one
   public void IncrementHour()
   {
        setHour( hour + 1 );  // set hour with incremented value
   }  // end method IncrementHour

} // end class Time1
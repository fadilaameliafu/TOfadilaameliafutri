using System;  
using System.Collections.Generic;  
using System.ComponentModel;  
using System.Data;  
using System.Drawing;  
using System.Globalization;  
using System.Linq;  
using System.Text;  
using System.Threading.Tasks;  
using System.Windows.Forms;  
  
namespace getNotepadFile  
{  
    public partial class CountryTime : Form  
    {  
        public CountryTime()  
        {  
            InitializeComponent();  
        }  
  
        private void timer1_Tick(object sender, EventArgs e)  
        {  
  
            var inTimeZone = TimeZoneInfo.FindSystemTimeZoneById("Jakarta Standard Time");  
            DateTime inTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.Local, inTimeZone);  
            label2.Text = Convert.ToString(inTime);  
  
  
  
        }  
  
        private void timer2_Tick(object sender, EventArgs e)  
        {  
            var euTimeZone = TimeZoneInfo.FindSystemTimeZoneById("Bali Standard Time");  
            DateTime euTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.Local, euTimeZone);  
            label3.Text = Convert.ToString(euTime);  
  
        }  
  
        private void timer4_Tick(object sender, EventArgs e)  
        {  
            var ukTimeZone = TimeZoneInfo.FindSystemTimeZoneById("London Standard Time");  
            DateTime ukTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.Local, ukTimeZone);  
            label21.Text = Convert.ToString(ukTime);  
  
        }  
  
        private void timer10_Tick(object sender, EventArgs e)  
        {  
            var euTimeZone = TimeZoneInfo.FindSystemTimeZoneById("Chairo Standard Time");  
            DateTime euTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.Local, euTimeZone);  
            label13.Text = Convert.ToString(euTime);  
        }  
  
        private void timer11_Tick(object sender, EventArgs e)  
        {  
            var siTimeZone = TimeZoneInfo.FindSystemTimeZoneById("Denver Standard Time");  
            DateTime siTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.Local, siTimeZone);  
            label15.Text = Convert.ToString(siTime);  
  
        }  
  
        private void timer9_Tick(object sender, EventArgs e)  
        {  
            var MaTimeZone = TimeZoneInfo.FindSystemTimeZoneById("Chicago Standard Time");  
            DateTime MaTime = TimeZoneInfo.ConvertTime(DateTime.Now, TimeZoneInfo.Local, MaTimeZone);  
            label7.Text = Convert.ToString(MaTime);  
        
        }  
    }  
}  
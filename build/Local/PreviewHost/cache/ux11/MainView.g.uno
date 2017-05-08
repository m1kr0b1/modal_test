[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Circle();
            __self.Color = float4(0.5215687f, 0.5333334f, 0.5294118f, 1f);
            __self.Margin = float4(1.5f, 1.5f, 1.5f, 1.5f);
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template1(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Uno.UX.FileSource> temp_File_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb1;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "temp_eb1"
        };
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.DockPanel();
            var temp = new global::Fuse.Controls.Image();
            temp_File_inst = new demoapp_FuseControlsImage_File_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("LocalPhoto");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp4 = new global::Fuse.Reactive.Data("locClick");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new demoapp_FuseControlsTextControl_Value_Property(temp1, __selector1);
            var temp5 = new global::Fuse.Reactive.Data("Title");
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new demoapp_FuseControlsTextControl_Value_Property(temp2, __selector1);
            var temp6 = new global::Fuse.Reactive.Data("Description");
            var temp7 = new global::Fuse.Controls.Rectangle();
            var temp8 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
            var temp9 = new global::Fuse.Controls.Rectangle();
            var temp10 = new global::Fuse.Reactive.DataBinding(temp_File_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Gestures.Clicked();
            var temp_eb1 = new global::Fuse.Reactive.EventBinding(temp4, __g_nametable);
            var temp12 = new global::Fuse.Controls.Panel();
            var temp13 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp14 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Height = new Uno.UX.Size(350f, Uno.UX.Unit.Unspecified);
            __self.Margin = float4(10f, 20f, 10f, 20f);
            temp7.CornerRadius = float4(10f, 10f, 10f, 10f);
            temp7.Layer = Fuse.Layer.Background;
            temp7.Fill = temp8;
            temp9.CornerRadius = float4(10f, 10f, 10f, 10f);
            temp9.Height = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
            temp9.Margin = float4(0f, -10f, 0f, -10f);
            global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Top);
            temp9.Children.Add(temp);
            temp.StretchMode = Fuse.Elements.StretchMode.Fill;
            temp.Height = new Uno.UX.Size(230f, Uno.UX.Unit.Unspecified);
            temp.Padding = float4(30f, 30f, 30f, 30f);
            temp.Bindings.Add(temp10);
            temp11.Handler += temp_eb1.OnEvent;
            temp11.Bindings.Add(temp_eb1);
            temp12.Margin = float4(0f, 40f, 0f, 40f);
            temp12.Children.Add(temp1);
            temp12.Children.Add(temp2);
            temp1.FontSize = 22f;
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp1.Alignment = Fuse.Elements.Alignment.Left;
            temp1.Margin = float4(10f, 0f, 10f, 0f);
            temp1.Padding = float4(10f, 10f, 10f, 10f);
            global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
            temp1.Bindings.Add(temp13);
            temp2.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp2.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp2.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            temp2.Alignment = Fuse.Elements.Alignment.Left;
            temp2.Margin = float4(10f, 60f, 10f, 60f);
            global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Top);
            temp2.Bindings.Add(temp14);
            __g_nametable.Objects.Add(temp_eb1);
            __self.Children.Add(temp7);
            __self.Children.Add(temp9);
            __self.Children.Add(temp11);
            __self.Children.Add(temp12);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "File";
        static global::Uno.UX.Selector __selector1 = "Value";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template2(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Fuse.Visual> nav_Active_inst;
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Gestures.Clicked();
            nav_Active_inst = new demoapp_FuseControlsNavigationControl_Active_Property(__parent.nav, __selector0);
            var temp = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
            temp.Value = __parent.page2;
            __self.Actions.Add(temp);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Active";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template3(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template4: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Template3 __parent;
            [Uno.WeakReference] internal readonly Fuse.Reactive.Each __parentInstance;
            public Template4(Template3 parent, Fuse.Reactive.Each parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<double> __self_Latitude_inst;
            global::Uno.UX.Property<double> __self_Longitude_inst;
            global::Uno.UX.Property<string> __self_Label_inst;
            global::Uno.UX.NameTable __g_nametable;
            static string[] __g_static_nametable = new string[] {
            };
            static Template4()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.MapMarker();
                __self_Latitude_inst = new demoapp_FuseControlsMapMarker_Latitude_Property(__self, __selector0);
                var temp = new global::Fuse.Reactive.Data("lat");
                __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
                __self_Longitude_inst = new demoapp_FuseControlsMapMarker_Longitude_Property(__self, __selector1);
                var temp1 = new global::Fuse.Reactive.Data("lon");
                __self_Label_inst = new demoapp_FuseControlsMapMarker_Label_Property(__self, __selector2);
                var temp2 = new global::Fuse.Reactive.Data("Title");
                var temp3 = new global::Fuse.Reactive.DataBinding(__self_Latitude_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
                var temp4 = new global::Fuse.Reactive.DataBinding(__self_Longitude_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
                var temp5 = new global::Fuse.Reactive.DataBinding(__self_Label_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
                __self.Bindings.Add(temp3);
                __self.Bindings.Add(temp4);
                __self.Bindings.Add(temp5);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Latitude";
            static global::Uno.UX.Selector __selector1 = "Longitude";
            static global::Uno.UX.Selector __selector2 = "Label";
        }
        global::Uno.UX.Property<object> __self_Items_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Reactive.Each();
            __self_Items_inst = new demoapp_FuseReactiveEach_Items_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("Locations");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp1 = new Template4(this, __self);
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_Items_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Templates.Add(temp1);
            __self.Bindings.Add(temp2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Items";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template4: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template4(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Uno.UX.FileSource> temp_File_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template4()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.StackPanel();
            var temp = new global::Fuse.Controls.Image();
            temp_File_inst = new demoapp_FuseControlsImage_File_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("LocalPhoto");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new demoapp_FuseControlsTextControl_Value_Property(temp1, __selector1);
            var temp4 = new global::Fuse.Reactive.Data("Title");
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new demoapp_FuseControlsTextControl_Value_Property(temp2, __selector1);
            var temp5 = new global::Fuse.Reactive.Data("Description");
            var temp6 = new global::Fuse.Controls.Rectangle();
            var temp7 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
            var temp8 = new global::Fuse.Controls.Rectangle();
            var temp9 = new global::Fuse.Reactive.DataBinding(temp_File_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp10 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Height = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
            __self.Margin = float4(10f, 10f, 10f, 10f);
            __self.Padding = float4(10f, 10f, 10f, 10f);
            temp6.CornerRadius = float4(10f, 10f, 10f, 10f);
            temp6.Layer = Fuse.Layer.Background;
            temp6.Fill = temp7;
            temp8.Padding = float4(-10f, -10f, -10f, -10f);
            temp8.Children.Add(temp);
            temp.Height = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
            temp.Bindings.Add(temp9);
            temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp1.FontSize = 22f;
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp1.Alignment = Fuse.Elements.Alignment.Left;
            global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
            temp1.Bindings.Add(temp10);
            temp2.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp2.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp2.Alignment = Fuse.Elements.Alignment.Left;
            temp2.Bindings.Add(temp11);
            __self.Children.Add(temp6);
            __self.Children.Add(temp8);
            __self.Children.Add(temp1);
            __self.Children.Add(temp2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "File";
        static global::Uno.UX.Selector __selector1 = "Value";
    }
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<float> dialog_Opacity_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    global::Uno.UX.Property<Fuse.Visual> nav_Active_inst;
    global::Uno.UX.Property<float4> indicator_Color_inst;
    global::Uno.UX.Property<float4> bgColor_Color_inst;
    global::Uno.UX.Property<float4> titleText_Color_inst;
    global::Uno.UX.Property<Uno.UX.Size> indicator_Width_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<bool> shrinkIndicatorWidth_Value_inst;
    global::Uno.UX.Property<float4> indicatorColorAttractor_Value_inst;
    global::Uno.UX.Property<float4> bgColorAttractor_Value_inst;
    global::Uno.UX.Property<float4> titleTextAttractor_Value_inst;
    global::Uno.UX.Property<float> h1_Opacity_inst;
    global::Uno.UX.Property<float> col1_Width_inst;
    global::Uno.UX.Property<float4> c1_Color_inst;
    global::Uno.UX.Property<object> temp3_Items_inst;
    global::Uno.UX.Property<object> temp4_Data_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
    global::Uno.UX.Property<object> temp6_Items_inst;
    global::Uno.UX.Property<float> h2_Opacity_inst;
    global::Uno.UX.Property<float> col2_Width_inst;
    global::Uno.UX.Property<float4> c2_Color_inst;
    global::Uno.UX.Property<float> h3_Opacity_inst;
    global::Uno.UX.Property<float> col3_Width_inst;
    global::Uno.UX.Property<float4> c3_Color_inst;
    global::Uno.UX.Property<float> h4_Opacity_inst;
    global::Uno.UX.Property<float> col4_Width_inst;
    global::Uno.UX.Property<float4> c4_Color_inst;
    internal global::Fuse.Controls.Panel dialog;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Controls.Text titleText;
    internal global::Fuse.Controls.Rectangle indicator;
    internal global::Fuse.Controls.Panel p1;
    internal global::Fuse.Controls.Panel p4;
    internal global::Fuse.Layouts.Column col1;
    internal global::Fuse.Layouts.Column col2;
    internal global::Fuse.Layouts.Column col3;
    internal global::Fuse.Layouts.Column col4;
    internal global::TabIcon c1;
    internal global::TabHeader h1;
    internal global::TabIcon c2;
    internal global::TabHeader h2;
    internal global::TabIcon c3;
    internal global::TabHeader h3;
    internal global::TabIcon c4;
    internal global::TabHeader h4;
    internal global::Fuse.Controls.PageControl nav;
    internal global::Fuse.Animations.Attractor<float4> indicatorColorAttractor;
    internal global::Fuse.Controls.Rectangle bgColor;
    internal global::Fuse.Animations.Attractor<float4> bgColorAttractor;
    internal global::Fuse.Animations.Attractor<float4> titleTextAttractor;
    internal global::Fuse.Triggers.WhileTrue shrinkIndicatorWidth;
    internal global::Fuse.Controls.Page page1;
    internal global::Fuse.Controls.Page page2;
    internal global::Fuse.Controls.Page page3;
    internal global::Fuse.Controls.Page page4;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "dialog",
        "temp_eb0",
        "titleText",
        "indicator",
        "p1",
        "p4",
        "col1",
        "col2",
        "col3",
        "col4",
        "c1",
        "h1",
        "c2",
        "h2",
        "c3",
        "h3",
        "c4",
        "h4",
        "nav",
        "indicatorColorAttractor",
        "bgColor",
        "bgColorAttractor",
        "titleTextAttractor",
        "shrinkIndicatorWidth",
        "page1",
        "page2",
        "page3",
        "page4"
    };
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color0, "color0");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color1, "color1");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color2, "color2");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color3, "color3");
        global::Uno.UX.Resource.SetGlobalKey(global::ColorPalette.color4, "color4");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp7 = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        var temp8 = new global::Fuse.Reactive.FuseJS.Http();
        var temp9 = new global::Fuse.Reactive.FuseJS.TimerModule();
        var temp10 = new global::Fuse.Drawing.BrushConverter();
        var temp11 = new global::Fuse.Triggers.BusyTaskModule();
        var temp12 = new global::Fuse.FileSystem.FileSystemModule();
        var temp13 = new global::Fuse.Storage.StorageModule();
        var temp14 = new global::Fuse.WebSocket.WebSocketClientModule();
        var temp15 = new global::Fuse.ImageTools.ImageTools();
        var temp16 = new global::Fuse.GeoLocation.GeoLocation();
        var temp17 = new global::Polyfills.Window.WindowModule();
        var temp18 = new global::FuseJS.Globals();
        var temp19 = new global::FuseJS.Lifecycle();
        var temp20 = new global::FuseJS.Environment();
        var temp21 = new global::FuseJS.Base64();
        var temp22 = new global::FuseJS.Bundle();
        var temp23 = new global::FuseJS.FileReaderImpl();
        var temp24 = new global::FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp25 = new global::Fuse.Reactive.Data("closeDialog");
        var temp = new global::Fuse.Triggers.WhileFalse();
        temp_Value_inst = new demoapp_FuseTriggersWhileBool_Value_Property(temp, __selector0);
        var temp26 = new global::Fuse.Reactive.Data("isDialogShowing");
        dialog = new global::Fuse.Controls.Panel();
        dialog_Opacity_inst = new demoapp_FuseElementsElement_Opacity_Property(dialog, __selector1);
        var temp1 = new global::Fuse.Triggers.WhileTrue();
        temp1_Value_inst = new demoapp_FuseTriggersWhileBool_Value_Property(temp1, __selector0);
        var temp27 = new global::Fuse.Reactive.Data("isDialogShowing");
        nav = new global::Fuse.Controls.PageControl();
        nav_Active_inst = new demoapp_FuseControlsNavigationControl_Active_Property(nav, __selector2);
        indicator = new global::Fuse.Controls.Rectangle();
        indicator_Color_inst = new demoapp_FuseControlsShape_Color_Property(indicator, __selector3);
        bgColor = new global::Fuse.Controls.Rectangle();
        bgColor_Color_inst = new demoapp_FuseControlsShape_Color_Property(bgColor, __selector3);
        titleText = new global::Fuse.Controls.Text();
        titleText_Color_inst = new demoapp_FuseControlsTextControl_Color_Property(titleText, __selector3);
        indicator_Width_inst = new demoapp_FuseElementsElement_Width_Property(indicator, __selector4);
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new demoapp_FuseReactiveEach_Items_Property(temp2, __selector5);
        var temp28 = new global::Fuse.Reactive.Data("hikes");
        shrinkIndicatorWidth = new global::Fuse.Triggers.WhileTrue();
        shrinkIndicatorWidth_Value_inst = new demoapp_FuseTriggersWhileBool_Value_Property(shrinkIndicatorWidth, __selector0);
        indicatorColorAttractor = new global::Fuse.Animations.Attractor<float4>(indicator_Color_inst);
        indicatorColorAttractor_Value_inst = new demoapp_FuseAnimationsAttractorfloat4_Value_Property(indicatorColorAttractor, __selector0);
        bgColorAttractor = new global::Fuse.Animations.Attractor<float4>(bgColor_Color_inst);
        bgColorAttractor_Value_inst = new demoapp_FuseAnimationsAttractorfloat4_Value_Property(bgColorAttractor, __selector0);
        titleTextAttractor = new global::Fuse.Animations.Attractor<float4>(titleText_Color_inst);
        titleTextAttractor_Value_inst = new demoapp_FuseAnimationsAttractorfloat4_Value_Property(titleTextAttractor, __selector0);
        h1 = new global::TabHeader();
        h1_Opacity_inst = new demoapp_FuseElementsElement_Opacity_Property(h1, __selector1);
        col1 = new global::Fuse.Layouts.Column();
        col1_Width_inst = new demoapp_FuseLayoutsColumn_Width_Property(col1, __selector4);
        c1 = new global::TabIcon();
        c1_Color_inst = new demoapp_FuseControlsImage_Color_Property(c1, __selector3);
        var temp3 = new global::Fuse.Reactive.Each();
        temp3_Items_inst = new demoapp_FuseReactiveEach_Items_Property(temp3, __selector5);
        var temp29 = new global::Fuse.Reactive.Data("trails");
        var temp4 = new global::Fuse.Reactive.Select();
        temp4_Data_inst = new demoapp_FuseReactiveWith_Data_Property(temp4, __selector6);
        var temp30 = new global::Fuse.Reactive.Data("mapLocation");
        var temp5 = new global::Fuse.Controls.Text();
        temp5_Value_inst = new demoapp_FuseControlsTextControl_Value_Property(temp5, __selector0);
        var temp31 = new global::Fuse.Reactive.Data("timeoutLocation");
        var temp6 = new global::Fuse.Reactive.Each();
        temp6_Items_inst = new demoapp_FuseReactiveEach_Items_Property(temp6, __selector5);
        var temp32 = new global::Fuse.Reactive.Data("trails");
        h2 = new global::TabHeader();
        h2_Opacity_inst = new demoapp_FuseElementsElement_Opacity_Property(h2, __selector1);
        col2 = new global::Fuse.Layouts.Column();
        col2_Width_inst = new demoapp_FuseLayoutsColumn_Width_Property(col2, __selector4);
        c2 = new global::TabIcon();
        c2_Color_inst = new demoapp_FuseControlsImage_Color_Property(c2, __selector3);
        h3 = new global::TabHeader();
        h3_Opacity_inst = new demoapp_FuseElementsElement_Opacity_Property(h3, __selector1);
        col3 = new global::Fuse.Layouts.Column();
        col3_Width_inst = new demoapp_FuseLayoutsColumn_Width_Property(col3, __selector4);
        c3 = new global::TabIcon();
        c3_Color_inst = new demoapp_FuseControlsImage_Color_Property(c3, __selector3);
        h4 = new global::TabHeader();
        h4_Opacity_inst = new demoapp_FuseElementsElement_Opacity_Property(h4, __selector1);
        col4 = new global::Fuse.Layouts.Column();
        col4_Width_inst = new demoapp_FuseLayoutsColumn_Width_Property(col4, __selector4);
        c4 = new global::TabIcon();
        c4_Color_inst = new demoapp_FuseControlsImage_Color_Property(c4, __selector3);
        var temp33 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp34 = new global::Fuse.Controls.Rectangle();
        var temp35 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp36 = new global::Fuse.Controls.StackPanel();
        var temp37 = new global::Fuse.Controls.Text();
        var temp38 = new global::Fuse.Controls.Button();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp25, __g_nametable);
        var temp39 = new global::Fuse.Animations.Move();
        var temp40 = new global::Fuse.Animations.Scale();
        var temp41 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp26, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp42 = new global::Fuse.Effects.DropShadow();
        var temp43 = new global::Fuse.Animations.Change<float>(dialog_Opacity_inst);
        var temp44 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp27, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp45 = new global::Fuse.Controls.ClientPanel();
        var temp46 = new global::Fuse.Controls.Grid();
        var temp47 = new global::Fuse.Controls.Grid();
        var temp48 = new global::Fuse.Reactive.Each();
        var temp49 = new Template(this, this);
        var temp50 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/Fonts/Roboto-Black.ttf")));
        var temp51 = new global::Fuse.Controls.Image();
        var temp52 = new global::Fuse.Controls.Panel();
        var temp53 = new global::Fuse.Controls.Grid();
        p1 = new global::Fuse.Controls.Panel();
        p4 = new global::Fuse.Controls.Panel();
        var temp54 = new global::Fuse.Controls.Grid();
        var temp55 = new global::Fuse.Controls.Panel();
        var temp56 = new global::Fuse.Controls.Grid();
        var temp57 = new global::Fuse.Gestures.Clicked();
        var temp58 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp59 = new global::Fuse.Controls.Panel();
        var temp60 = new global::Fuse.Controls.Grid();
        var temp61 = new global::Fuse.Gestures.Clicked();
        var temp62 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp63 = new global::Fuse.Controls.Panel();
        var temp64 = new global::Fuse.Controls.Grid();
        var temp65 = new global::Fuse.Gestures.Clicked();
        var temp66 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp67 = new global::Fuse.Controls.Panel();
        var temp68 = new global::Fuse.Controls.Grid();
        var temp69 = new global::Fuse.Gestures.Clicked();
        var temp70 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp71 = new global::Fuse.Motion.NavigationMotion();
        var temp72 = new global::Fuse.Animations.Change<Uno.UX.Size>(indicator_Width_inst);
        page1 = new global::Fuse.Controls.Page();
        var temp73 = new global::Fuse.Controls.ScrollView();
        var temp74 = new global::Fuse.Controls.Grid();
        var temp75 = new Template1(this, this);
        var temp76 = new Template2(this, this);
        var temp77 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp28, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp78 = new global::Fuse.Navigation.WhileActive();
        var temp79 = new global::Fuse.Triggers.Actions.Set<bool>(shrinkIndicatorWidth_Value_inst);
        var temp80 = new global::Fuse.Triggers.Actions.Set<float4>(indicatorColorAttractor_Value_inst);
        var temp81 = new global::Fuse.Triggers.Actions.Set<float4>(bgColorAttractor_Value_inst);
        var temp82 = new global::Fuse.Triggers.Actions.Set<float4>(titleTextAttractor_Value_inst);
        var temp83 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp84 = new global::Fuse.Animations.Change<float>(h1_Opacity_inst);
        var temp85 = new global::Fuse.Animations.Change<float>(col1_Width_inst);
        var temp86 = new global::Fuse.Animations.Change<float4>(c1_Color_inst);
        page2 = new global::Fuse.Controls.Page();
        var temp87 = new global::Fuse.Controls.StackPanel();
        var temp88 = new global::Fuse.Controls.Panel();
        var temp89 = new global::Fuse.Controls.NativeViewHost();
        var temp90 = new global::Fuse.Controls.MapView();
        var temp91 = new Template3(this, this);
        var temp92 = new global::Fuse.Reactive.DataBinding(temp3_Items_inst, temp29, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp93 = new global::Fuse.Reactive.DataBinding(temp4_Data_inst, temp30, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp94 = new global::Fuse.Controls.Panel();
        var temp95 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp31, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp96 = new global::Fuse.Controls.Panel();
        var temp97 = new global::Fuse.Controls.ScrollView();
        var temp98 = new global::Fuse.Controls.Grid();
        var temp99 = new Template4(this, this);
        var temp100 = new global::Fuse.Reactive.DataBinding(temp6_Items_inst, temp32, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp101 = new global::Fuse.Navigation.WhileActive();
        var temp102 = new global::Fuse.Triggers.Actions.Set<bool>(shrinkIndicatorWidth_Value_inst);
        var temp103 = new global::Fuse.Triggers.Actions.Set<float4>(indicatorColorAttractor_Value_inst);
        var temp104 = new global::Fuse.Triggers.Actions.Set<float4>(bgColorAttractor_Value_inst);
        var temp105 = new global::Fuse.Triggers.Actions.Set<float4>(titleTextAttractor_Value_inst);
        var temp106 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp107 = new global::Fuse.Animations.Change<float>(h2_Opacity_inst);
        var temp108 = new global::Fuse.Animations.Change<float>(col2_Width_inst);
        var temp109 = new global::Fuse.Animations.Change<float4>(c2_Color_inst);
        page3 = new global::Fuse.Controls.Page();
        var temp110 = new global::PagePlaceholder();
        var temp111 = new global::Fuse.Navigation.WhileActive();
        var temp112 = new global::Fuse.Triggers.Actions.Set<bool>(shrinkIndicatorWidth_Value_inst);
        var temp113 = new global::Fuse.Triggers.Actions.Set<float4>(indicatorColorAttractor_Value_inst);
        var temp114 = new global::Fuse.Triggers.Actions.Set<float4>(bgColorAttractor_Value_inst);
        var temp115 = new global::Fuse.Triggers.Actions.Set<float4>(titleTextAttractor_Value_inst);
        var temp116 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp117 = new global::Fuse.Animations.Change<float>(h3_Opacity_inst);
        var temp118 = new global::Fuse.Animations.Change<float>(col3_Width_inst);
        var temp119 = new global::Fuse.Animations.Change<float4>(c3_Color_inst);
        page4 = new global::Fuse.Controls.Page();
        var temp120 = new global::PagePlaceholder();
        var temp121 = new global::Fuse.Navigation.WhileActive();
        var temp122 = new global::Fuse.Triggers.Actions.Set<bool>(shrinkIndicatorWidth_Value_inst);
        var temp123 = new global::Fuse.Triggers.Actions.Set<float4>(indicatorColorAttractor_Value_inst);
        var temp124 = new global::Fuse.Triggers.Actions.Set<float4>(bgColorAttractor_Value_inst);
        var temp125 = new global::Fuse.Triggers.Actions.Set<float4>(titleTextAttractor_Value_inst);
        var temp126 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp127 = new global::Fuse.Animations.Move();
        var temp128 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp129 = new global::Fuse.Animations.Change<float>(h4_Opacity_inst);
        var temp130 = new global::Fuse.Animations.Change<float>(col4_Width_inst);
        var temp131 = new global::Fuse.Animations.Change<float4>(c4_Color_inst);
        temp33.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\");\n        var GeoLocation = require(\"FuseJS/GeoLocation\");\n\n        var hikes = [{\"Title\":\"This is a hike\", \"Description\":\"It's a very good hike\",\"LocalPhoto\":\"/Assets/screen2.png\"}]\n        var trails = [{\"Title\":\"This is a trail\", \"Description\":\"It's a very good trail\",\"LocalPhoto\":\"/Assets/screen2.png\", \"Locations\":[{\"lat\":\"41.996075\",\"lon\":\"21.431812\"}]}]\n\n        // Immediate\n\n        var Tours = Observable();\n        var timeoutLocation = Observable(\"\");\n\n        var isDialogShowing = Observable(false);\n\n\t\tfunction distance(lat1, lon1, lat2, lon2) \n\t\t{\n\t\t  var R = 6371; // km\n\t\t  var dLat = toRad(lat2-lat1);\n\t\t  var dLon = toRad(lon2-lon1);\n\t\t  var lat1 = toRad(lat1);\n\t\t  var lat2 = toRad(lat2);\n\n\t\t  var a = Math.sin(dLat/2) * Math.sin(dLat/2) +\n\t\t    Math.sin(dLon/2) * Math.sin(dLon/2) * Math.cos(lat1) * Math.cos(lat2); \n\t\t  var c = 2 * Math.atan2(Math.sqrt(a), Math.sqrt(1-a)); \n\t\t  var d = R * c;\n\t\t  return d * 1000;\n\t\t}\n\n\t\t// Converts numeric degrees to radians\n\t\tfunction toRad(Value) \n\t\t{\n\t\t    return Value * Math.PI / 180;\n\t\t}\n\n        var observedLocation = GeoLocation.observe(\"changed\");\n        var mapLocation = observedLocation;\n\n\t\tGeoLocation.on(\"error\", function(err){console.log(err)});\n\t\tGeoLocation.on(\"changed\", function(loc){\n\t\t\t\n\t\t\tvar dist = distance(41.995876, 21.431812, observedLocation.value.latitude, observedLocation.value.longitude)\n\n\t\t\tif ((dist < 50)){\n\t\t\t\t// Display modal\n\t\t\t\tisDialogShowing = true;\n\t\t\t\tconsole.log('check 1')\n\t\t\t\tconsole.log(isDialogShowing);\n\t\t\t}\n\n\t\t});\n\n\n\t\tvar mapLocation = observedLocation;\n\t\tvar continuousLocation = observedLocation.map(JSON.stringify);\n\n       function startContinuousListener() {\n            var intervalMs = 1000;\n            var desiredAccuracyInMeters = 10;\n            GeoLocation.startListening(intervalMs, desiredAccuracyInMeters);\n        }\n\n        function stopContinuousListener() {\n            GeoLocation.stopListening();\n        }\n\n        startContinuousListener()\n\n\n        module.exports = {\n            timeoutLocation: continuousLocation,\n            mapLocation: mapLocation,\n            hikes: hikes,\n            trails: trails\n        };\n\n    ";
        temp33.LineNumber = 2;
        temp33.FileName = "MainView.ux";
        dialog.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        dialog.Margin = float4(40f, 40f, 40f, 40f);
        dialog.Padding = float4(20f, 40f, 20f, 0f);
        dialog.Name = __selector7;
        dialog.Children.Add(temp34);
        dialog.Children.Add(temp36);
        dialog.Children.Add(temp);
        dialog.Children.Add(temp42);
        temp34.CornerRadius = float4(2f, 2f, 2f, 2f);
        temp34.Opacity = 0.8f;
        temp34.Layer = Fuse.Layer.Background;
        temp34.Fill = temp35;
        temp36.Children.Add(temp37);
        temp36.Children.Add(temp38);
        temp37.Value = "Your playdate has been booked!";
        temp37.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp37.FontSize = 30f;
        temp37.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp37.Alignment = Fuse.Elements.Alignment.Center;
        temp38.Text = "Fantastic!";
        temp38.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        temp38.Margin = float4(0f, 20f, 0f, 0f);
        temp38.Padding = float4(10f, 10f, 10f, 50f);
        global::Fuse.Gestures.Clicked.AddHandler(temp38, temp_eb0.OnEvent);
        temp38.Bindings.Add(temp_eb0);
        temp.Animators.Add(temp39);
        temp.Animators.Add(temp40);
        temp.Bindings.Add(temp41);
        temp39.X = 3f;
        temp39.Duration = 0.6;
        temp39.RelativeTo = Fuse.TranslationModes.Size;
        temp39.Easing = Fuse.Animations.Easing.BackIn;
        temp40.Factor = 0.8f;
        temp40.Duration = 0.6;
        temp40.Easing = Fuse.Animations.Easing.BackIn;
        temp1.Animators.Add(temp43);
        temp1.Bindings.Add(temp44);
        temp43.Value = 1f;
        temp43.Duration = 0.3;
        temp43.Easing = Fuse.Animations.Easing.QuadraticInOut;
        temp45.Children.Add(temp46);
        temp45.Children.Add(temp52);
        temp45.Children.Add(nav);
        temp46.Columns = "auto,1*,auto";
        temp46.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp46.Margin = float4(5f, 5f, 5f, 5f);
        global::Fuse.Controls.DockPanel.SetDock(temp46, Fuse.Layouts.Dock.Top);
        temp46.Children.Add(temp47);
        temp46.Children.Add(titleText);
        temp46.Children.Add(temp51);
        temp47.RowCount = 2;
        temp47.ColumnCount = 2;
        temp47.Width = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp47.Height = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp47.Margin = float4(10f, 10f, 10f, 10f);
        temp47.Children.Add(temp48);
        temp48.Count = 4;
        temp48.Templates.Add(temp49);
        titleText.Value = "GEO TEST";
        titleText.FontSize = 25f;
        titleText.Color = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        titleText.Alignment = Fuse.Elements.Alignment.Center;
        titleText.Name = __selector8;
        titleText.Font = temp50;
        temp51.Color = float4(0.5215687f, 0.5333334f, 0.5294118f, 1f);
        temp51.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp51.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp51.Margin = float4(10f, 10f, 10f, 10f);
        temp51.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/search.png"));
        temp52.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp52, Fuse.Layouts.Dock.Top);
        temp52.Children.Add(indicator);
        temp52.Children.Add(temp53);
        temp52.Children.Add(temp54);
        indicator.CornerRadius = float4(30f, 30f, 30f, 30f);
        indicator.Color = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        indicator.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        indicator.Margin = float4(0f, 10f, 0f, 10f);
        indicator.ZOffset = 0.1f;
        indicator.Name = __selector9;
        global::Fuse.Controls.LayoutControl.SetLayoutMaster(indicator, p1);
        temp53.ColumnCount = 5;
        temp53.Margin = float4(-30f, 0f, -30f, 0f);
        temp53.Children.Add(p1);
        temp53.Children.Add(p4);
        p1.Name = __selector10;
        global::Fuse.Controls.Grid.SetColumn(p1, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(p1, 2);
        p4.Name = __selector11;
        global::Fuse.Controls.Grid.SetColumn(p4, 3);
        global::Fuse.Controls.Grid.SetColumnSpan(p4, 2);
        temp54.Margin = float4(-20f, 0f, -20f, 0f);
        temp54.ZOffset = 1f;
        temp54.ColumnList.Add(col1);
        temp54.ColumnList.Add(col2);
        temp54.ColumnList.Add(col3);
        temp54.ColumnList.Add(col4);
        temp54.Children.Add(temp55);
        temp54.Children.Add(temp59);
        temp54.Children.Add(temp63);
        temp54.Children.Add(temp67);
        col1.WidthMetric = Fuse.Layouts.Metric.Proportion;
        col1.Width = 1f;
        col2.WidthMetric = Fuse.Layouts.Metric.Proportion;
        col2.Width = 1f;
        col3.WidthMetric = Fuse.Layouts.Metric.Proportion;
        col3.Width = 1f;
        col4.WidthMetric = Fuse.Layouts.Metric.Proportion;
        col4.Width = 1f;
        temp55.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp55.Children.Add(temp56);
        temp55.Children.Add(temp57);
        temp56.Columns = "auto,1*";
        temp56.Alignment = Fuse.Elements.Alignment.Left;
        temp56.Margin = float4(40f, 0f, 40f, 0f);
        temp56.Children.Add(c1);
        temp56.Children.Add(h1);
        c1.Color = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        c1.Name = __selector12;
        c1.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/basket.png"));
        h1.Value = "Hikes";
        h1.Name = __selector13;
        temp57.Actions.Add(temp58);
        temp58.Value = page1;
        temp59.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp59.Children.Add(temp60);
        temp59.Children.Add(temp61);
        temp60.Columns = "auto,1*";
        temp60.Alignment = Fuse.Elements.Alignment.Left;
        temp60.Margin = float4(30f, 0f, 30f, 0f);
        temp60.Children.Add(c2);
        temp60.Children.Add(h2);
        c2.Color = float4(0.2156863f, 0.6313726f, 0.8431373f, 1f);
        c2.Name = __selector14;
        c2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/accountbalance.png"));
        h2.Value = "Trails";
        h2.Name = __selector15;
        temp61.Actions.Add(temp62);
        temp62.Value = page2;
        temp63.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp63.Children.Add(temp64);
        temp63.Children.Add(temp65);
        temp64.Columns = "auto,1*";
        temp64.Alignment = Fuse.Elements.Alignment.Left;
        temp64.Margin = float4(30f, 0f, 30f, 0f);
        temp64.Children.Add(c3);
        temp64.Children.Add(h3);
        c3.Color = float4(1f, 0.5960785f, 0.01176471f, 1f);
        c3.Name = __selector16;
        c3.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/play.png"));
        h3.Value = "Information";
        h3.Name = __selector17;
        temp65.Actions.Add(temp66);
        temp66.Value = page3;
        temp67.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        temp67.Children.Add(temp68);
        temp67.Children.Add(temp69);
        temp68.Columns = "auto,1*";
        temp68.Alignment = Fuse.Elements.Alignment.Left;
        temp68.Margin = float4(30f, 0f, 30f, 0f);
        temp68.Children.Add(c4);
        temp68.Children.Add(h4);
        c4.Color = float4(0.9607843f, 0.5607843f, 0.5294118f, 1f);
        c4.Name = __selector18;
        c4.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/person.png"));
        h4.Value = "Friends";
        h4.Name = __selector19;
        temp69.Actions.Add(temp70);
        temp70.Value = page4;
        nav.Name = __selector20;
        nav.Motion = temp71;
        nav.Children.Add(indicatorColorAttractor);
        nav.Children.Add(bgColor);
        nav.Children.Add(bgColorAttractor);
        nav.Children.Add(titleTextAttractor);
        nav.Children.Add(shrinkIndicatorWidth);
        nav.Children.Add(page1);
        nav.Children.Add(page2);
        nav.Children.Add(page3);
        nav.Children.Add(page4);
        temp71.GotoEasing = Fuse.Animations.Easing.BackOut;
        indicatorColorAttractor.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        indicatorColorAttractor.Name = __selector21;
        bgColor.Color = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        bgColor.Opacity = 0.12f;
        bgColor.Layer = Fuse.Layer.Background;
        bgColor.Name = __selector22;
        bgColorAttractor.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        bgColorAttractor.Name = __selector23;
        titleTextAttractor.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        titleTextAttractor.Name = __selector24;
        shrinkIndicatorWidth.Name = __selector25;
        shrinkIndicatorWidth.Animators.Add(temp72);
        temp72.Value = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
        temp72.Duration = 0.25;
        page1.Name = __selector26;
        page1.Children.Add(temp73);
        page1.Children.Add(temp78);
        page1.Children.Add(temp83);
        temp73.Children.Add(temp74);
        temp74.ColumnCount = 1;
        temp74.Children.Add(temp2);
        temp2.Templates.Add(temp75);
        temp2.Templates.Add(temp76);
        temp2.Bindings.Add(temp77);
        temp78.Threshold = 0.5f;
        temp78.Actions.Add(temp79);
        temp78.Actions.Add(temp80);
        temp78.Actions.Add(temp81);
        temp78.Actions.Add(temp82);
        temp79.Value = false;
        temp80.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        temp81.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        temp82.Value = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        temp83.Animators.Add(temp84);
        temp83.Animators.Add(temp85);
        temp83.Animators.Add(temp86);
        temp84.Value = 1f;
        temp85.Value = 2f;
        temp86.Value = Fuse.Drawing.Colors.White;
        page2.Name = __selector27;
        page2.Children.Add(temp87);
        temp87.Children.Add(temp88);
        temp87.Children.Add(temp94);
        temp87.Children.Add(temp96);
        temp88.Height = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp88.Children.Add(temp89);
        temp89.Children.Add(temp4);
        temp4.Nodes.Add(temp90);
        temp4.Bindings.Add(temp93);
        temp90.ShowMyLocationButton = true;
        temp90.Zoom = 10;
        temp90.Latitude = 41.99646;
        temp90.Longitude = 21.43141;
        temp90.Children.Add(temp3);
        temp3.Templates.Add(temp91);
        temp3.Bindings.Add(temp92);
        temp94.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp94.Children.Add(temp5);
        temp5.Bindings.Add(temp95);
        temp96.Height = new Uno.UX.Size(400f, Uno.UX.Unit.Unspecified);
        temp96.Children.Add(temp97);
        temp96.Children.Add(temp101);
        temp96.Children.Add(temp106);
        temp97.Children.Add(temp98);
        temp98.ColumnCount = 1;
        temp98.Children.Add(temp6);
        temp6.Templates.Add(temp99);
        temp6.Bindings.Add(temp100);
        temp101.Threshold = 0.5f;
        temp101.Actions.Add(temp102);
        temp101.Actions.Add(temp103);
        temp101.Actions.Add(temp104);
        temp101.Actions.Add(temp105);
        temp102.Value = true;
        temp103.Value = float4(0.2156863f, 0.6313726f, 0.8431373f, 1f);
        temp104.Value = float4(0.2156863f, 0.6313726f, 0.8431373f, 1f);
        temp105.Value = float4(0.2156863f, 0.6313726f, 0.8431373f, 1f);
        temp106.Animators.Add(temp107);
        temp106.Animators.Add(temp108);
        temp106.Animators.Add(temp109);
        temp107.Value = 1f;
        temp108.Value = 2f;
        temp109.Value = Fuse.Drawing.Colors.White;
        page3.Name = __selector28;
        page3.Children.Add(temp110);
        page3.Children.Add(temp111);
        page3.Children.Add(temp116);
        temp110.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/screen3.png"));
        temp111.Threshold = 0.5f;
        temp111.Actions.Add(temp112);
        temp111.Actions.Add(temp113);
        temp111.Actions.Add(temp114);
        temp111.Actions.Add(temp115);
        temp112.Value = true;
        temp113.Value = float4(1f, 0.5960785f, 0.01176471f, 1f);
        temp114.Value = float4(1f, 0.5960785f, 0.01176471f, 1f);
        temp115.Value = float4(1f, 0.5960785f, 0.01176471f, 1f);
        temp116.Animators.Add(temp117);
        temp116.Animators.Add(temp118);
        temp116.Animators.Add(temp119);
        temp117.Value = 1f;
        temp118.Value = 2f;
        temp119.Value = Fuse.Drawing.Colors.White;
        page4.Name = __selector29;
        page4.Children.Add(temp120);
        page4.Children.Add(temp121);
        page4.Children.Add(temp126);
        page4.Children.Add(temp128);
        temp120.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/screen4.png"));
        temp121.Threshold = 0.5f;
        temp121.Actions.Add(temp122);
        temp121.Actions.Add(temp123);
        temp121.Actions.Add(temp124);
        temp121.Actions.Add(temp125);
        temp122.Value = false;
        temp123.Value = float4(0.9607843f, 0.5607843f, 0.5294118f, 1f);
        temp124.Value = float4(0.9607843f, 0.5607843f, 0.5294118f, 1f);
        temp125.Value = float4(0.9607843f, 0.5607843f, 0.5294118f, 1f);
        temp126.Scale = 0.333f;
        temp126.Animators.Add(temp127);
        temp127.X = 1f;
        temp127.RelativeTo = Fuse.Elements.TranslationModes.PositionOffset;
        temp127.RelativeNode = p4;
        temp127.Target = indicator;
        temp128.Animators.Add(temp129);
        temp128.Animators.Add(temp130);
        temp128.Animators.Add(temp131);
        temp129.Value = 1f;
        temp130.Value = 2f;
        temp131.Value = Fuse.Drawing.Colors.White;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(dialog);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(titleText);
        __g_nametable.Objects.Add(indicator);
        __g_nametable.Objects.Add(p1);
        __g_nametable.Objects.Add(p4);
        __g_nametable.Objects.Add(col1);
        __g_nametable.Objects.Add(col2);
        __g_nametable.Objects.Add(col3);
        __g_nametable.Objects.Add(col4);
        __g_nametable.Objects.Add(c1);
        __g_nametable.Objects.Add(h1);
        __g_nametable.Objects.Add(c2);
        __g_nametable.Objects.Add(h2);
        __g_nametable.Objects.Add(c3);
        __g_nametable.Objects.Add(h3);
        __g_nametable.Objects.Add(c4);
        __g_nametable.Objects.Add(h4);
        __g_nametable.Objects.Add(nav);
        __g_nametable.Objects.Add(indicatorColorAttractor);
        __g_nametable.Objects.Add(bgColor);
        __g_nametable.Objects.Add(bgColorAttractor);
        __g_nametable.Objects.Add(titleTextAttractor);
        __g_nametable.Objects.Add(shrinkIndicatorWidth);
        __g_nametable.Objects.Add(page1);
        __g_nametable.Objects.Add(page2);
        __g_nametable.Objects.Add(page3);
        __g_nametable.Objects.Add(page4);
        this.Children.Add(temp33);
        this.Children.Add(dialog);
        this.Children.Add(temp1);
        this.Children.Add(temp45);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Opacity";
    static global::Uno.UX.Selector __selector2 = "Active";
    static global::Uno.UX.Selector __selector3 = "Color";
    static global::Uno.UX.Selector __selector4 = "Width";
    static global::Uno.UX.Selector __selector5 = "Items";
    static global::Uno.UX.Selector __selector6 = "Data";
    static global::Uno.UX.Selector __selector7 = "dialog";
    static global::Uno.UX.Selector __selector8 = "titleText";
    static global::Uno.UX.Selector __selector9 = "indicator";
    static global::Uno.UX.Selector __selector10 = "p1";
    static global::Uno.UX.Selector __selector11 = "p4";
    static global::Uno.UX.Selector __selector12 = "c1";
    static global::Uno.UX.Selector __selector13 = "h1";
    static global::Uno.UX.Selector __selector14 = "c2";
    static global::Uno.UX.Selector __selector15 = "h2";
    static global::Uno.UX.Selector __selector16 = "c3";
    static global::Uno.UX.Selector __selector17 = "h3";
    static global::Uno.UX.Selector __selector18 = "c4";
    static global::Uno.UX.Selector __selector19 = "h4";
    static global::Uno.UX.Selector __selector20 = "nav";
    static global::Uno.UX.Selector __selector21 = "indicatorColorAttractor";
    static global::Uno.UX.Selector __selector22 = "bgColor";
    static global::Uno.UX.Selector __selector23 = "bgColorAttractor";
    static global::Uno.UX.Selector __selector24 = "titleTextAttractor";
    static global::Uno.UX.Selector __selector25 = "shrinkIndicatorWidth";
    static global::Uno.UX.Selector __selector26 = "page1";
    static global::Uno.UX.Selector __selector27 = "page2";
    static global::Uno.UX.Selector __selector28 = "page3";
    static global::Uno.UX.Selector __selector29 = "page4";
}

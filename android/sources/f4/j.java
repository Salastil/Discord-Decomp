package f4;

import android.content.ComponentName;
import android.content.Context;
import android.util.Log;
import com.facebook.react.uimanager.ViewProps;

/* loaded from: classes.dex */
public abstract class j {
    public static final String a = v3.p.f("PackageManagerHelper");

    /* JADX WARN: Code restructure failed: missing block: B:7:0x0023, code lost:
    
        v3.p.d().a(r2, "Skipping component enablement for ".concat(r8.getName()));
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x0032, code lost:
    
        return;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void a(Context context, Class cls, boolean z5) {
        String str = a;
        try {
            int componentEnabledSetting = context.getPackageManager().getComponentEnabledSetting(new ComponentName(context, cls.getName()));
            boolean z6 = false;
            if (componentEnabledSetting != 0 && componentEnabledSetting == 1) {
                z6 = true;
            }
            context.getPackageManager().setComponentEnabledSetting(new ComponentName(context, cls.getName()), z5 ? 1 : 2, 1);
            v3.p d6 = v3.p.d();
            StringBuilder sb2 = new StringBuilder();
            sb2.append(cls.getName());
            sb2.append(" ");
            sb2.append(z5 ? ViewProps.ENABLED : "disabled");
            d6.a(str, sb2.toString());
        } catch (Exception e9) {
            v3.p d7 = v3.p.d();
            StringBuilder sb3 = new StringBuilder();
            a3.e.v(cls, sb3, "could not be ");
            sb3.append(z5 ? ViewProps.ENABLED : "disabled");
            String sb4 = sb3.toString();
            if (d7.a <= 3) {
                Log.d(str, sb4, e9);
            }
        }
    }
}

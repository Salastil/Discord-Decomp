package ih;

import android.content.res.Configuration;
import android.graphics.Typeface;
import android.os.Build;

/* loaded from: classes3.dex */
public abstract class f {
    /* JADX WARN: Code restructure failed: missing block: B:3:0x0006, code lost:
    
        r0 = r2.fontWeightAdjustment;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Typeface a(Configuration configuration, Typeface typeface) {
        int i5;
        int i6;
        if (Build.VERSION.SDK_INT < 31 || i5 == Integer.MAX_VALUE || i5 == 0 || typeface == null) {
            return null;
        }
        int weight = typeface.getWeight();
        i6 = configuration.fontWeightAdjustment;
        return Typeface.create(typeface, jb.a.d(weight + i6, 1, 1000), typeface.isItalic());
    }
}

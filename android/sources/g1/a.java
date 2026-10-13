package g1;

import android.os.Build;
import java.util.HashMap;
import kotlin.Pair;
import kotlin.collections.v0;

/* loaded from: classes.dex */
public final class a {
    public final int a;

    public a() {
        int i5;
        a aVar;
        HashMap f2 = v0.f(new Pair("robolectric-BrandX/ProductX/Device30:11", 30), new Pair("robolectric-BrandX/ProductX/Device31:12", 31), new Pair("OPPO/CPH2025EEA/OP4BA2L1:12", 30), new Pair("OPPO/CPH2207EEA/OP4F0BL1:12", 30), new Pair("OPPO/PENM00/OP4EC1:11", 30), new Pair("OnePlus/OnePlus7TTMO/OnePlus7TTMO:11", 30), new Pair("OnePlus/OnePlus8_BETA/OnePlus8:11", 30), new Pair("Xiaomi/umi_global/umi:11", 30), new Pair("realme/RMX2085/RMX2085L1:11", 30), new Pair("samsung/c1qsqw/c1q:12", 30), new Pair("samsung/o1quew/o1q:12", 30), new Pair("samsung/r0quew/r0q:12", 30), new Pair("samsung/r0sxxx/r0s:12", 30));
        int i6 = Build.VERSION.SDK_INT >= 31 ? Build.VERSION.MEDIA_PERFORMANCE_CLASS : 0;
        if (i6 >= 30) {
            aVar = this;
            i5 = i6;
        } else {
            Integer num = (Integer) f2.get(Build.BRAND + '/' + Build.PRODUCT + '/' + Build.DEVICE + ':' + Build.VERSION.RELEASE);
            int intValue = (num == null ? 0 : num).intValue();
            i5 = intValue >= 30 ? intValue : 0;
            aVar = this;
        }
        aVar.a = i5;
    }
}

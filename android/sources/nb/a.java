package nb;

import com.facebook.yoga.YogaConfig;
import com.facebook.yoga.YogaNative;

/* loaded from: classes3.dex */
public final class a extends YogaConfig {
    public long a;

    public final void finalize() {
        long j = this.a;
        if (j != 0) {
            this.a = 0L;
            YogaNative.jni_YGConfigFreeJNI(j);
        }
    }
}

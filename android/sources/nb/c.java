package nb;

import com.facebook.yoga.YogaNative;
import com.facebook.yoga.YogaNodeJNIBase;

/* loaded from: classes3.dex */
public final class c extends YogaNodeJNIBase {
    public final Object clone() {
        return super.clone();
    }

    public final void finalize() {
        long j = this.f5172x;
        if (j != 0) {
            this.f5172x = 0L;
            YogaNative.jni_YGNodeFinalizeJNI(j);
        }
    }
}

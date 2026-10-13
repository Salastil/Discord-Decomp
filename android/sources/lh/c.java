package lh;

import android.graphics.RectF;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class c implements d {
    public final float a;

    public c(float f2) {
        this.a = f2;
    }

    @Override // lh.d
    public final float a(RectF rectF) {
        return jb.a.c(this.a, 0.0f, Math.min(rectF.width() / 2.0f, rectF.height() / 2.0f));
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof c) && this.a == ((c) obj).a;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Float.valueOf(this.a)});
    }
}

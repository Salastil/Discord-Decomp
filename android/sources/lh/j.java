package lh;

import android.graphics.RectF;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class j implements d {
    public final float a;

    public j(float f2) {
        this.a = f2;
    }

    @Override // lh.d
    public final float a(RectF rectF) {
        return Math.min(rectF.width(), rectF.height()) * this.a;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return (obj instanceof j) && this.a == ((j) obj).a;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Float.valueOf(this.a)});
    }

    public final String toString() {
        return k0.d.m(new StringBuilder(), (int) (this.a * 100.0f), "%");
    }
}

package a1;

import android.content.res.Resources;
import java.util.Objects;

/* loaded from: classes.dex */
public final class j {
    public final Resources a;

    /* renamed from: b, reason: collision with root package name */
    public final Resources.Theme f27b;

    public j(Resources resources, Resources.Theme theme) {
        this.a = resources;
        this.f27b = theme;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && j.class == obj.getClass()) {
            j jVar = (j) obj;
            if (this.a.equals(jVar.a) && Objects.equals(this.f27b, jVar.f27b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Objects.hash(this.a, this.f27b);
    }
}

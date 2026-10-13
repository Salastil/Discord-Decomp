package nm;

import androidx.coordinatorlayout.widget.CoordinatorLayout;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.b0;
import com.swmansion.rnscreens.stack.views.ScreensCoordinatorLayout;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i {
    public final b0 a;

    /* renamed from: b, reason: collision with root package name */
    public final Screen f15568b;

    /* renamed from: c, reason: collision with root package name */
    public final CoordinatorLayout f15569c;

    /* renamed from: d, reason: collision with root package name */
    public final d f15570d;

    public i(b0 fragment, Screen screen, ScreensCoordinatorLayout coordinatorLayout, d dimmingDelegate) {
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        Intrinsics.checkNotNullParameter(screen, "screen");
        Intrinsics.checkNotNullParameter(coordinatorLayout, "coordinatorLayout");
        Intrinsics.checkNotNullParameter(dimmingDelegate, "dimmingDelegate");
        this.a = fragment;
        this.f15568b = screen;
        this.f15569c = coordinatorLayout;
        this.f15570d = dimmingDelegate;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof i)) {
            return false;
        }
        i iVar = (i) obj;
        return Intrinsics.areEqual(this.a, iVar.a) && Intrinsics.areEqual(this.f15568b, iVar.f15568b) && Intrinsics.areEqual(this.f15569c, iVar.f15569c) && Intrinsics.areEqual(this.f15570d, iVar.f15570d);
    }

    public final int hashCode() {
        return this.f15570d.hashCode() + ((this.f15569c.hashCode() + ((this.f15568b.hashCode() + (this.a.hashCode() * 31)) * 31)) * 31);
    }

    public final String toString() {
        return "SheetAnimationContext(fragment=" + this.a + ", screen=" + this.f15568b + ", coordinatorLayout=" + this.f15569c + ", dimmingDelegate=" + this.f15570d + ")";
    }
}

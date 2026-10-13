package nm;

import androidx.fragment.app.Fragment;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.b0;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class l {
    public static final boolean a(Screen screen) {
        Intrinsics.checkNotNullParameter(screen, "<this>");
        return screen.getStackPresentation() == Screen.StackPresentation.f6695v && screen.getSheetDetents().a.size() == 1 && ((Number) CollectionsKt.K(screen.getSheetDetents().a)).doubleValue() == -1.0d;
    }

    public static final int b(Screen screen, int i5, float f2) {
        Integer g6;
        int intValue;
        Intrinsics.checkNotNullParameter(screen, "<this>");
        Fragment fragment = screen.getFragment();
        if (fragment != null) {
            Intrinsics.checkNotNullParameter(fragment, "<this>");
            k kVar = ((b0) fragment).P;
            if (kVar != null && (g6 = kVar.g()) != null && i5 > (intValue = (int) (g6.intValue() + f2))) {
                return intValue;
            }
        }
        return i5;
    }

    public static final boolean c(Screen screen) {
        Intrinsics.checkNotNullParameter(screen, "<this>");
        return screen.getStackPresentation() == Screen.StackPresentation.f6695v;
    }
}

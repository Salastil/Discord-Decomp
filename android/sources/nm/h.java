package nm;

import android.view.View;
import android.view.inputmethod.InputMethodManager;
import androidx.core.view.WindowInsetsCompat;
import androidx.fragment.app.Fragment;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.b0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h extends sg.b {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ k f15567b;

    public /* synthetic */ h(k kVar, int i5) {
        this.a = i5;
        this.f15567b = kVar;
    }

    /* JADX WARN: Failed to find 'out' block for switch in B:2:0x0002. Please report as an issue. */
    @Override // sg.b
    public final void b(View bottomSheet, float f2) {
        switch (this.a) {
        }
        Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
    }

    @Override // sg.b
    public final void c(int i5, View bottomSheet) {
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
                if (i5 == 4 && WindowInsetsCompat.g(null, bottomSheet.getRootWindowInsets()).a.p(8)) {
                    bottomSheet.requestFocus();
                    InputMethodManager d6 = this.f15567b.d();
                    if (d6 != null) {
                        d6.hideSoftInputFromWindow(bottomSheet.getWindowToken(), 0);
                        return;
                    }
                    return;
                }
                return;
            default:
                Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
                k kVar = this.f15567b;
                Screen screen = kVar.f15571d;
                int i6 = 1;
                boolean z5 = i5 == 3 || i5 == 4 || i5 == 5 || i5 == 6;
                if (z5) {
                    int size = screen.getSheetDetents().a.size();
                    if (size == 1) {
                        if (i5 != 3) {
                            if (i5 != 5) {
                                throw new IllegalArgumentException(a3.e.f(i5, size, "[RNScreens] Invalid state ", " for detentCount "));
                            }
                            i6 = -1;
                        }
                        i6 = 0;
                    } else if (size != 2) {
                        if (size != 3) {
                            throw new IllegalArgumentException(a3.e.f(i5, size, "[RNScreens] Invalid state ", " for detentCount "));
                        }
                        if (i5 != 3) {
                            if (i5 != 4) {
                                if (i5 != 5) {
                                    if (i5 != 6) {
                                        throw new IllegalArgumentException(a3.e.f(i5, size, "[RNScreens] Invalid state ", " for detentCount "));
                                    }
                                }
                                i6 = -1;
                            }
                            i6 = 0;
                        } else {
                            i6 = 2;
                        }
                    } else if (i5 != 3) {
                        if (i5 != 4) {
                            if (i5 != 5) {
                                throw new IllegalArgumentException(a3.e.f(i5, size, "[RNScreens] Invalid state ", " for detentCount "));
                            }
                            i6 = -1;
                        }
                        i6 = 0;
                    }
                    kVar.f15575w = i6;
                }
                screen.onSheetDetentChanged$react_native_screens_release(kVar.f15575w, z5);
                if (i5 == 5) {
                    Fragment fragment = screen.getFragment();
                    Intrinsics.checkNotNull(fragment, "null cannot be cast to non-null type com.swmansion.rnscreens.ScreenStackFragment");
                    ((b0) fragment).y();
                    return;
                }
                return;
        }
    }
}

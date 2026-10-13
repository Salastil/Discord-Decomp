package sg;

import android.view.View;
import androidx.core.view.accessibility.AccessibilityViewCommand;
import com.google.android.material.bottomsheet.BottomSheetBehavior;

/* loaded from: classes3.dex */
public final class a implements AccessibilityViewCommand {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18011d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ BottomSheetBehavior f18012e;

    public a(BottomSheetBehavior bottomSheetBehavior, int i5) {
        this.f18012e = bottomSheetBehavior;
        this.f18011d = i5;
    }

    @Override // androidx.core.view.accessibility.AccessibilityViewCommand
    public final boolean c(View view, AccessibilityViewCommand.CommandArguments commandArguments) {
        this.f18012e.P(this.f18011d);
        return true;
    }
}

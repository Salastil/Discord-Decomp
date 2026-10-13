package hc;

import android.view.View;
import androidx.core.view.accessibility.AccessibilityViewCommand;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.material.sidesheet.SideSheetBehavior;

/* loaded from: classes3.dex */
public final /* synthetic */ class u implements ke.j, AccessibilityViewCommand {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9892d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f9893e;

    public /* synthetic */ u(int i5, Object obj) {
        this.f9893e = obj;
        this.f9892d = i5;
    }

    @Override // androidx.core.view.accessibility.AccessibilityViewCommand
    public boolean c(View view, AccessibilityViewCommand.CommandArguments commandArguments) {
        ((SideSheetBehavior) this.f9893e).w(this.f9892d);
        return true;
    }

    @Override // ke.j
    public void invoke(Object obj) {
        ((com.google.android.exoplayer2.h) obj).onMediaItemTransition((MediaItem) this.f9893e, this.f9892d);
    }
}

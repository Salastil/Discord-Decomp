package pg;

import android.view.View;
import android.view.accessibility.AccessibilityManager;
import com.google.android.material.behavior.HideBottomViewOnScrollBehavior;
import com.google.android.material.behavior.HideViewOnScrollBehavior;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements AccessibilityManager.TouchExplorationStateChangeListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ View f16390b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ v0.b f16391c;

    public /* synthetic */ a(v0.b bVar, View view, int i5) {
        this.a = i5;
        this.f16391c = bVar;
        this.f16390b = view;
    }

    @Override // android.view.accessibility.AccessibilityManager.TouchExplorationStateChangeListener
    public final void onTouchExplorationStateChanged(boolean z5) {
        switch (this.a) {
            case 0:
                HideBottomViewOnScrollBehavior hideBottomViewOnScrollBehavior = (HideBottomViewOnScrollBehavior) this.f16391c;
                if (z5 && hideBottomViewOnScrollBehavior.j == 1) {
                    hideBottomViewOnScrollBehavior.w(this.f16390b);
                    break;
                }
                break;
            default:
                HideViewOnScrollBehavior hideViewOnScrollBehavior = (HideViewOnScrollBehavior) this.f16391c;
                if (z5 && hideViewOnScrollBehavior.j == 1) {
                    hideViewOnScrollBehavior.x(this.f16390b);
                    break;
                }
                break;
        }
    }
}

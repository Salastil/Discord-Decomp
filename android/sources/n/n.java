package n;

import android.view.CollapsibleActionView;
import android.view.View;
import android.widget.FrameLayout;

/* loaded from: classes.dex */
public final class n extends FrameLayout implements m.a {

    /* renamed from: d, reason: collision with root package name */
    public final CollapsibleActionView f14695d;

    /* JADX WARN: Multi-variable type inference failed */
    public n(View view) {
        super(view.getContext());
        this.f14695d = (CollapsibleActionView) view;
        addView(view);
    }

    @Override // m.a
    public final void onActionViewCollapsed() {
        this.f14695d.onActionViewCollapsed();
    }

    @Override // m.a
    public final void onActionViewExpanded() {
        this.f14695d.onActionViewExpanded();
    }
}

package wm;

import android.view.ContextThemeWrapper;
import android.view.View;
import android.widget.LinearLayout;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class f extends LinearLayout {

    /* renamed from: d, reason: collision with root package name */
    public final i f19911d;

    /* renamed from: e, reason: collision with root package name */
    public final sg.f f19912e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(ContextThemeWrapper context, i contentView) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(contentView, "contentView");
        this.f19911d = contentView;
        sg.f fVar = new sg.f(context);
        fVar.setLayoutParams(new LinearLayout.LayoutParams(-1, -2));
        fVar.setVisibility(8);
        this.f19912e = fVar;
        setOrientation(1);
        contentView.setLayoutParams(new LinearLayout.LayoutParams(-1, 0, 1.0f));
        addView(fVar);
        addView(contentView);
    }

    @NotNull
    public final View getContentView$react_native_screens_release() {
        return this.f19911d;
    }

    public final void setGrabberVisible$react_native_screens_release(boolean z5) {
        this.f19912e.setVisibility(z5 ? 0 : 8);
    }
}

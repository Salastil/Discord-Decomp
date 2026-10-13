package ym;

import android.content.Context;
import androidx.appcompat.widget.AppCompatTextView;
import com.google.android.material.appbar.MaterialToolbar;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class b extends c {

    /* renamed from: c0, reason: collision with root package name */
    public final MaterialToolbar f20964c0;

    /* renamed from: d0, reason: collision with root package name */
    public AppCompatTextView f20965d0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(Context context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        MaterialToolbar materialToolbar = new MaterialToolbar(context, null);
        materialToolbar.setElevation(0.0f);
        materialToolbar.setLayoutParams(new ng.e(-2));
        this.f20964c0 = materialToolbar;
        addView(getToolbar());
    }

    public final AppCompatTextView getManagedTitleView$react_native_screens_release() {
        return this.f20965d0;
    }

    @Override // ym.c
    @NotNull
    public MaterialToolbar getToolbar() {
        return this.f20964c0;
    }

    public final void setManagedTitleView$react_native_screens_release(AppCompatTextView appCompatTextView) {
        this.f20965d0 = appCompatTextView;
    }
}

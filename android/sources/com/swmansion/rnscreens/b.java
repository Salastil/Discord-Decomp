package com.swmansion.rnscreens;

import android.content.Context;
import android.view.View;
import androidx.appcompat.widget.f3;
import androidx.appcompat.widget.m3;
import androidx.appcompat.widget.y2;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class b extends f3 {
    public y2 H0;
    public View.OnClickListener I0;
    public final m3 J0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b(Context context, b0 fragment) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        a onBackPressedCallback = new a(this);
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        Intrinsics.checkNotNullParameter(onBackPressedCallback, "onBackPressedCallback");
        m3 m3Var = new m3();
        m3Var.f1037c = fragment;
        m3Var.f1038d = onBackPressedCallback;
        m3Var.f1036b = true;
        this.J0 = m3Var;
        super.setOnSearchClickListener(new com.discord.chat.presentation.list.delegate.b(6, this));
        super.setOnCloseListener(new app.rive.runtime.kotlin.core.a(23, this));
        setMaxWidth(Integer.MAX_VALUE);
    }

    public final boolean getOverrideBackAction() {
        return this.J0.f1036b;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (this.f967p0) {
            return;
        }
        this.J0.d();
    }

    @Override // androidx.appcompat.widget.f3, android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        m3 m3Var = this.J0;
        if (m3Var.a) {
            ((a) m3Var.f1038d).remove();
            m3Var.a = false;
        }
    }

    @Override // androidx.appcompat.widget.f3
    public void setOnCloseListener(y2 y2Var) {
        this.H0 = y2Var;
    }

    @Override // androidx.appcompat.widget.f3
    public void setOnSearchClickListener(View.OnClickListener onClickListener) {
        this.I0 = onClickListener;
    }

    public final void setOverrideBackAction(boolean z5) {
        this.J0.f1036b = z5;
    }

    public final void setText(@NotNull String text) {
        Intrinsics.checkNotNullParameter(text, "text");
        r(text);
    }
}

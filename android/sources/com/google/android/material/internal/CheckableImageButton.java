package com.google.android.material.internal;

import android.R;
import android.content.Context;
import android.os.Parcelable;
import android.util.AttributeSet;
import android.view.View;
import android.widget.Checkable;
import androidx.appcompat.widget.y;
import androidx.core.view.s0;
import androidx.recyclerview.widget.RecyclerView;
import ch.a;
import ch.b;

/* loaded from: classes3.dex */
public class CheckableImageButton extends y implements Checkable {

    /* renamed from: y, reason: collision with root package name */
    public static final int[] f6074y = {R.attr.state_checked};

    /* renamed from: v, reason: collision with root package name */
    public boolean f6075v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f6076w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f6077x;

    public CheckableImageButton(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, com.discord.R.attr.imageButtonStyle);
        this.f6076w = true;
        this.f6077x = true;
        s0.p(this, new a(0, this));
    }

    @Override // android.widget.Checkable
    public final boolean isChecked() {
        return this.f6075v;
    }

    @Override // android.widget.ImageView, android.view.View
    public final int[] onCreateDrawableState(int i5) {
        return this.f6075v ? View.mergeDrawableStates(super.onCreateDrawableState(i5 + 1), f6074y) : super.onCreateDrawableState(i5);
    }

    @Override // android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof b)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        b bVar = (b) parcelable;
        super.onRestoreInstanceState(bVar.f7399d);
        setChecked(bVar.f3497i);
    }

    @Override // android.view.View
    public final Parcelable onSaveInstanceState() {
        b bVar = new b(super.onSaveInstanceState());
        bVar.f3497i = this.f6075v;
        return bVar;
    }

    public void setCheckable(boolean z5) {
        if (this.f6076w != z5) {
            this.f6076w = z5;
            sendAccessibilityEvent(0);
        }
    }

    @Override // android.widget.Checkable
    public void setChecked(boolean z5) {
        if (!this.f6076w || this.f6075v == z5) {
            return;
        }
        this.f6075v = z5;
        refreshDrawableState();
        sendAccessibilityEvent(RecyclerView.ItemAnimator.FLAG_MOVED);
    }

    public void setPressable(boolean z5) {
        this.f6077x = z5;
    }

    @Override // android.view.View
    public void setPressed(boolean z5) {
        if (this.f6077x) {
            super.setPressed(z5);
        }
    }

    @Override // android.widget.Checkable
    public final void toggle() {
        setChecked(!this.f6075v);
    }
}

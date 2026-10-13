package com.facebook.drawee.span;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.TextView;

/* loaded from: classes3.dex */
public class SimpleDraweeSpanTextView extends TextView {
    private DraweeSpanStringBuilder mDraweeStringBuilder;
    private boolean mIsAttached;

    public SimpleDraweeSpanTextView(Context context) {
        super(context);
        this.mIsAttached = false;
    }

    public void detachCurrentDraweeSpanStringBuilder() {
        DraweeSpanStringBuilder draweeSpanStringBuilder = this.mDraweeStringBuilder;
        if (draweeSpanStringBuilder != null) {
            draweeSpanStringBuilder.b(this);
        }
        this.mDraweeStringBuilder = null;
    }

    @Override // android.widget.TextView, android.view.View
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.mIsAttached = true;
        DraweeSpanStringBuilder draweeSpanStringBuilder = this.mDraweeStringBuilder;
        if (draweeSpanStringBuilder != null) {
            draweeSpanStringBuilder.a(this);
        }
    }

    @Override // android.view.View
    public void onDetachedFromWindow() {
        this.mIsAttached = false;
        DraweeSpanStringBuilder draweeSpanStringBuilder = this.mDraweeStringBuilder;
        if (draweeSpanStringBuilder != null) {
            draweeSpanStringBuilder.b(this);
        }
        super.onDetachedFromWindow();
    }

    @Override // android.view.View
    public void onFinishTemporaryDetach() {
        super.onFinishTemporaryDetach();
        this.mIsAttached = true;
        DraweeSpanStringBuilder draweeSpanStringBuilder = this.mDraweeStringBuilder;
        if (draweeSpanStringBuilder != null) {
            draweeSpanStringBuilder.a(this);
        }
    }

    @Override // android.view.View
    public void onStartTemporaryDetach() {
        this.mIsAttached = false;
        DraweeSpanStringBuilder draweeSpanStringBuilder = this.mDraweeStringBuilder;
        if (draweeSpanStringBuilder != null) {
            draweeSpanStringBuilder.b(this);
        }
        super.onStartTemporaryDetach();
    }

    @Override // android.widget.TextView
    public void onTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
        super.onTextChanged(charSequence, i5, i6, i10);
        detachCurrentDraweeSpanStringBuilder();
    }

    public void setDraweeSpanStringBuilder(DraweeSpanStringBuilder draweeSpanStringBuilder) {
        setText(draweeSpanStringBuilder, TextView.BufferType.SPANNABLE);
        this.mDraweeStringBuilder = draweeSpanStringBuilder;
        if (draweeSpanStringBuilder == null || !this.mIsAttached) {
            return;
        }
        draweeSpanStringBuilder.a(this);
    }

    public SimpleDraweeSpanTextView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.mIsAttached = false;
    }

    public SimpleDraweeSpanTextView(Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        this.mIsAttached = false;
    }
}

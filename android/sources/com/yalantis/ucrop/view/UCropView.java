package com.yalantis.ucrop.view;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Paint;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import androidx.annotation.NonNull;
import com.discord.R;
import qa.t;
import rd.u;
import un.a;

/* loaded from: classes3.dex */
public class UCropView extends FrameLayout {

    /* renamed from: d, reason: collision with root package name */
    public final GestureCropImageView f6857d;

    /* renamed from: e, reason: collision with root package name */
    public final OverlayView f6858e;

    public UCropView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        LayoutInflater.from(context).inflate(R.layout.ucrop_view, (ViewGroup) this, true);
        GestureCropImageView gestureCropImageView = (GestureCropImageView) findViewById(R.id.image_view_crop);
        this.f6857d = gestureCropImageView;
        OverlayView overlayView = (OverlayView) findViewById(R.id.view_overlay);
        this.f6858e = overlayView;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(attributeSet, a.f18962b);
        overlayView.getClass();
        overlayView.I = obtainStyledAttributes.getBoolean(2, false);
        int color = obtainStyledAttributes.getColor(3, overlayView.getResources().getColor(R.color.ucrop_color_default_dimmed));
        overlayView.J = color;
        Paint paint = overlayView.L;
        paint.setColor(color);
        Paint.Style style = Paint.Style.STROKE;
        paint.setStyle(style);
        paint.setStrokeWidth(1.0f);
        int dimensionPixelSize = obtainStyledAttributes.getDimensionPixelSize(5, overlayView.getResources().getDimensionPixelSize(R.dimen.ucrop_default_crop_frame_stoke_width));
        int color2 = obtainStyledAttributes.getColor(4, overlayView.getResources().getColor(R.color.ucrop_color_default_crop_frame));
        Paint paint2 = overlayView.N;
        paint2.setStrokeWidth(dimensionPixelSize);
        paint2.setColor(color2);
        paint2.setStyle(style);
        Paint paint3 = overlayView.O;
        paint3.setStrokeWidth(dimensionPixelSize * 3);
        paint3.setColor(color2);
        paint3.setStyle(style);
        overlayView.G = obtainStyledAttributes.getBoolean(10, true);
        int dimensionPixelSize2 = obtainStyledAttributes.getDimensionPixelSize(9, overlayView.getResources().getDimensionPixelSize(R.dimen.ucrop_default_crop_grid_stoke_width));
        int color3 = obtainStyledAttributes.getColor(6, overlayView.getResources().getColor(R.color.ucrop_color_default_crop_grid));
        Paint paint4 = overlayView.M;
        paint4.setStrokeWidth(dimensionPixelSize2);
        paint4.setColor(color3);
        overlayView.f6855x = obtainStyledAttributes.getInt(8, 2);
        overlayView.f6856y = obtainStyledAttributes.getInt(7, 2);
        overlayView.H = obtainStyledAttributes.getBoolean(11, true);
        gestureCropImageView.getClass();
        float abs = Math.abs(obtainStyledAttributes.getFloat(0, 0.0f));
        float abs2 = Math.abs(obtainStyledAttributes.getFloat(1, 0.0f));
        if (abs == 0.0f || abs2 == 0.0f) {
            gestureCropImageView.O = 0.0f;
        } else {
            gestureCropImageView.O = abs / abs2;
        }
        obtainStyledAttributes.recycle();
        gestureCropImageView.setCropBoundsChangeListener(new t(16, this));
        overlayView.setOverlayViewChangeListener(new u(12, this));
    }

    @NonNull
    public GestureCropImageView getCropImageView() {
        return this.f6857d;
    }

    @NonNull
    public OverlayView getOverlayView() {
        return this.f6858e;
    }

    @Override // android.widget.FrameLayout, android.view.ViewGroup
    public final boolean shouldDelayChildPressedState() {
        return false;
    }
}

package com.discord.channel_spine;

import android.graphics.Rect;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.discord.chat.input.views.ChatInputRootView;
import com.discord.chat.presentation.message.view.voicemessages.AudioPlayerView;
import com.discord.zoom_layout.ZoomLayoutFixed;
import com.google.android.material.carousel.CarouselLayoutManager;
import oh.w;
import ym.h;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements View.OnLayoutChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3818d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3819e;

    public /* synthetic */ a(int i5, Object obj) {
        this.f3818d = i5;
        this.f3819e = obj;
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
        boolean z5;
        og.a aVar;
        switch (this.f3818d) {
            case 0:
                ChannelSpineView.configureAsReplySpline$lambda$1((ChannelSpineView) this.f3819e, view, i5, i6, i10, i11, i12, i13, i14, i15);
                break;
            case 1:
                ChatInputRootView._init_$lambda$10((ChatInputRootView) this.f3819e, view, i5, i6, i10, i11, i12, i13, i14, i15);
                break;
            case 2:
                AudioPlayerView._init_$lambda$8((AudioPlayerView) this.f3819e, view, i5, i6, i10, i11, i12, i13, i14, i15);
                break;
            case 3:
                ZoomLayoutFixed.layoutChangeListener$lambda$0((ZoomLayoutFixed) this.f3819e, view, i5, i6, i10, i11, i12, i13, i14, i15);
                break;
            case 4:
                rg.a aVar2 = (rg.a) this.f3819e;
                View view2 = aVar2.O;
                ImageView imageView = aVar2.Q;
                if (imageView.getVisibility() == 0 && (aVar = aVar2.f8575x0) != null) {
                    Rect rect = new Rect();
                    imageView.getDrawingRect(rect);
                    aVar.setBounds(rect);
                    aVar.k(imageView, null);
                }
                FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) aVar2.N.getLayoutParams();
                int i16 = (i10 - i5) + layoutParams.rightMargin + layoutParams.leftMargin;
                int i17 = (i11 - i6) + layoutParams.topMargin + layoutParams.bottomMargin;
                boolean z6 = true;
                if (aVar2.f8577y0 == 1 && aVar2.f8567s0 == -2) {
                    FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) view2.getLayoutParams();
                    if (aVar2.f8567s0 != -2 || view2.getMeasuredWidth() == i16) {
                        z5 = false;
                    } else {
                        layoutParams2.width = Math.max(i16, Math.min(aVar2.f8565q0, aVar2.getMeasuredWidth() - (aVar2.f8571v0 * 2)));
                        z5 = true;
                    }
                    if (view2.getMeasuredHeight() < i17) {
                        layoutParams2.height = i17;
                    } else {
                        z6 = z5;
                    }
                    if (z6) {
                        view2.setLayoutParams(layoutParams2);
                        break;
                    }
                }
                break;
            case 5:
                CarouselLayoutManager carouselLayoutManager = (CarouselLayoutManager) this.f3819e;
                if (i10 - i5 != i14 - i12 || i11 - i6 != i15 - i13) {
                    view.post(new w(7, carouselLayoutManager));
                    break;
                }
                break;
            default:
                ((h) this.f3819e).v();
                break;
        }
    }
}

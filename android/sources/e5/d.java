package e5;

import android.R;
import android.content.Context;
import android.view.SurfaceView;
import android.view.TextureView;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.google.android.exoplayer2.SimpleExoPlayer;
import com.google.android.exoplayer2.ui.SubtitleView;

/* loaded from: classes.dex */
public final class d extends FrameLayout {
    public final ViewGroup.LayoutParams E;
    public boolean F;
    public final a3.h G;

    /* renamed from: d, reason: collision with root package name */
    public View f8007d;

    /* renamed from: e, reason: collision with root package name */
    public final View f8008e;

    /* renamed from: i, reason: collision with root package name */
    public final SubtitleView f8009i;

    /* renamed from: v, reason: collision with root package name */
    public final a f8010v;

    /* renamed from: w, reason: collision with root package name */
    public final c f8011w;

    /* renamed from: x, reason: collision with root package name */
    public SimpleExoPlayer f8012x;

    /* renamed from: y, reason: collision with root package name */
    public final Context f8013y;

    public d(Context context) {
        super(context, null, 0);
        this.F = true;
        this.G = new a3.h(12, this);
        this.f8013y = context;
        ViewGroup.LayoutParams layoutParams = new ViewGroup.LayoutParams(-1, -1);
        this.E = layoutParams;
        this.f8011w = new c(this);
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(-1, -1);
        layoutParams2.gravity = 17;
        a aVar = new a(context, null);
        aVar.f8003e = 0;
        this.f8010v = aVar;
        aVar.setLayoutParams(layoutParams2);
        View view = new View(getContext());
        this.f8008e = view;
        view.setLayoutParams(layoutParams);
        view.setBackgroundColor(context.getColor(R.color.black));
        SubtitleView subtitleView = new SubtitleView(context, null);
        this.f8009i = subtitleView;
        subtitleView.setLayoutParams(layoutParams);
        subtitleView.a();
        subtitleView.b();
        b();
        aVar.addView(view, 1, layoutParams);
        aVar.addView(subtitleView, 2, layoutParams);
        addViewInLayout(aVar, 0, layoutParams2);
    }

    public final void a() {
        SimpleExoPlayer simpleExoPlayer = this.f8012x;
        if (simpleExoPlayer == null) {
            return;
        }
        View view = this.f8007d;
        if (view instanceof TextureView) {
            simpleExoPlayer.P((TextureView) view);
        } else if (view instanceof SurfaceView) {
            simpleExoPlayer.p((SurfaceView) view);
        }
    }

    public final void b() {
        boolean z5 = this.F;
        Context context = this.f8013y;
        View textureView = z5 ? new TextureView(context) : new SurfaceView(context);
        ViewGroup.LayoutParams layoutParams = this.E;
        textureView.setLayoutParams(layoutParams);
        this.f8007d = textureView;
        a aVar = this.f8010v;
        if (aVar.getChildAt(0) != null) {
            aVar.removeViewAt(0);
        }
        aVar.addView(this.f8007d, 0, layoutParams);
        if (this.f8012x != null) {
            a();
        }
    }

    public View getVideoSurfaceView() {
        return this.f8007d;
    }

    public void setHideShutterView(boolean z5) {
        this.f8008e.setVisibility(z5 ? 4 : 0);
    }

    public void setPlayer(SimpleExoPlayer simpleExoPlayer) {
        SimpleExoPlayer simpleExoPlayer2 = this.f8012x;
        if (simpleExoPlayer2 == simpleExoPlayer) {
            return;
        }
        c cVar = this.f8011w;
        if (simpleExoPlayer2 != null) {
            simpleExoPlayer2.m(cVar);
            SimpleExoPlayer simpleExoPlayer3 = this.f8012x;
            if (simpleExoPlayer3 != null) {
                View view = this.f8007d;
                if (view instanceof TextureView) {
                    simpleExoPlayer3.k((TextureView) view);
                } else if (view instanceof SurfaceView) {
                    simpleExoPlayer3.G((SurfaceView) view);
                }
            }
        }
        this.f8012x = simpleExoPlayer;
        this.f8008e.setVisibility(0);
        if (simpleExoPlayer != null) {
            a();
            simpleExoPlayer.u(cVar);
        }
    }

    public void setResizeMode(int i5) {
        a aVar = this.f8010v;
        if (aVar.getResizeMode() != i5) {
            aVar.setResizeMode(i5);
            post(this.G);
        }
    }

    public void setUseTextureView(boolean z5) {
        if (z5 != this.F) {
            this.F = z5;
            b();
        }
    }
}

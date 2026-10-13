package com.google.android.exoplayer2.ui;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.graphics.RectF;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.os.Looper;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.SurfaceView;
import android.view.TextureView;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import com.discord.R;
import com.discord.key_commands.KeyCommandDescriptor;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.video.VideoSize;
import fi.e0;
import he.a;
import he.i;
import he.j;
import he.k;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;
import ke.b;
import ke.d0;
import ke.f;
import le.m;

@Deprecated
/* loaded from: classes3.dex */
public class PlayerView extends FrameLayout {
    public static final /* synthetic */ int W = 0;
    public final View E;
    public final TextView F;
    public final PlayerControlView G;
    public final FrameLayout H;
    public final FrameLayout I;
    public Player J;
    public boolean K;
    public i L;
    public boolean M;
    public Drawable N;
    public int O;
    public boolean P;
    public CharSequence Q;
    public int R;
    public boolean S;
    public boolean T;
    public boolean U;
    public int V;

    /* renamed from: d, reason: collision with root package name */
    public final j f5542d;

    /* renamed from: e, reason: collision with root package name */
    public final AspectRatioFrameLayout f5543e;

    /* renamed from: i, reason: collision with root package name */
    public final View f5544i;

    /* renamed from: v, reason: collision with root package name */
    public final View f5545v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f5546w;

    /* renamed from: x, reason: collision with root package name */
    public final ImageView f5547x;

    /* renamed from: y, reason: collision with root package name */
    public final SubtitleView f5548y;

    /* JADX WARN: Multi-variable type inference failed */
    public PlayerView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        boolean z5;
        int i5;
        int i6;
        boolean z6;
        int i10;
        int i11;
        boolean z7;
        boolean z8;
        boolean z10;
        int i12;
        boolean z11;
        int i13;
        boolean z12;
        j jVar = new j(this);
        this.f5542d = jVar;
        if (isInEditMode()) {
            this.f5543e = null;
            this.f5544i = null;
            this.f5545v = null;
            this.f5546w = false;
            this.f5547x = null;
            this.f5548y = null;
            this.E = null;
            this.F = null;
            this.G = null;
            this.H = null;
            this.I = null;
            ImageView imageView = new ImageView(context);
            if (d0.a >= 23) {
                Resources resources = getResources();
                imageView.setImageDrawable(d0.r(context, resources, 2131231366));
                imageView.setBackgroundColor(resources.getColor(R.color.exo_edit_mode_background_color, null));
            } else {
                Resources resources2 = getResources();
                imageView.setImageDrawable(d0.r(context, resources2, 2131231366));
                imageView.setBackgroundColor(resources2.getColor(R.color.exo_edit_mode_background_color));
            }
            addView(imageView);
            return;
        }
        int i14 = R.layout.exo_player_view;
        int i15 = 5000;
        if (attributeSet != null) {
            TypedArray obtainStyledAttributes = context.getTheme().obtainStyledAttributes(attributeSet, k.f9981d, 0, 0);
            try {
                z8 = obtainStyledAttributes.hasValue(23);
                i6 = obtainStyledAttributes.getColor(23, 0);
                i14 = obtainStyledAttributes.getResourceId(12, R.layout.exo_player_view);
                z10 = obtainStyledAttributes.getBoolean(28, true);
                i12 = obtainStyledAttributes.getResourceId(6, 0);
                boolean z13 = obtainStyledAttributes.getBoolean(29, true);
                i5 = obtainStyledAttributes.getInt(24, 1);
                i10 = obtainStyledAttributes.getInt(14, 0);
                i15 = obtainStyledAttributes.getInt(22, 5000);
                boolean z14 = obtainStyledAttributes.getBoolean(8, true);
                boolean z15 = obtainStyledAttributes.getBoolean(2, true);
                int integer = obtainStyledAttributes.getInteger(20, 0);
                this.P = obtainStyledAttributes.getBoolean(9, this.P);
                z5 = obtainStyledAttributes.getBoolean(7, true);
                obtainStyledAttributes.recycle();
                z7 = z14;
                i11 = integer;
                z11 = z13;
                z6 = z15;
            } catch (Throwable th2) {
                obtainStyledAttributes.recycle();
                throw th2;
            }
        } else {
            z5 = true;
            i5 = 1;
            i6 = 0;
            z6 = true;
            i10 = 0;
            i11 = 0;
            z7 = true;
            z8 = false;
            z10 = true;
            i12 = 0;
            z11 = true;
        }
        int i16 = i15;
        LayoutInflater.from(context).inflate(i14, this);
        setDescendantFocusability(KeyCommandDescriptor.ModifierFlags.CONTROL);
        AspectRatioFrameLayout aspectRatioFrameLayout = (AspectRatioFrameLayout) findViewById(R.id.exo_content_frame);
        this.f5543e = aspectRatioFrameLayout;
        if (aspectRatioFrameLayout != null) {
            aspectRatioFrameLayout.setResizeMode(i10);
        }
        View findViewById = findViewById(R.id.exo_shutter);
        this.f5544i = findViewById;
        if (findViewById != null && z8) {
            findViewById.setBackgroundColor(i6);
        }
        if (aspectRatioFrameLayout == null || i5 == 0) {
            i13 = 0;
            this.f5545v = null;
            z12 = false;
        } else {
            ViewGroup.LayoutParams layoutParams = new ViewGroup.LayoutParams(-1, -1);
            if (i5 == 2) {
                this.f5545v = new TextureView(context);
            } else if (i5 == 3) {
                try {
                    int i17 = me.k.I;
                    this.f5545v = (View) me.k.class.getConstructor(Context.class).newInstance(context);
                    z12 = true;
                    this.f5545v.setLayoutParams(layoutParams);
                    this.f5545v.setOnClickListener(jVar);
                    i13 = 0;
                    this.f5545v.setClickable(false);
                    aspectRatioFrameLayout.addView(this.f5545v, 0);
                } catch (Exception e9) {
                    throw new IllegalStateException("spherical_gl_surface_view requires an ExoPlayer dependency", e9);
                }
            } else if (i5 != 4) {
                this.f5545v = new SurfaceView(context);
            } else {
                try {
                    int i18 = m.f13919e;
                    this.f5545v = (View) m.class.getConstructor(Context.class).newInstance(context);
                } catch (Exception e10) {
                    throw new IllegalStateException("video_decoder_gl_surface_view requires an ExoPlayer dependency", e10);
                }
            }
            z12 = false;
            this.f5545v.setLayoutParams(layoutParams);
            this.f5545v.setOnClickListener(jVar);
            i13 = 0;
            this.f5545v.setClickable(false);
            aspectRatioFrameLayout.addView(this.f5545v, 0);
        }
        this.f5546w = z12;
        this.H = (FrameLayout) findViewById(R.id.exo_ad_overlay);
        this.I = (FrameLayout) findViewById(R.id.exo_overlay);
        ImageView imageView2 = (ImageView) findViewById(R.id.exo_artwork);
        this.f5547x = imageView2;
        this.M = (!z10 || imageView2 == null) ? i13 : 1;
        if (i12 != 0) {
            this.N = getContext().getDrawable(i12);
        }
        SubtitleView subtitleView = (SubtitleView) findViewById(R.id.exo_subtitles);
        this.f5548y = subtitleView;
        if (subtitleView != null) {
            subtitleView.a();
            subtitleView.b();
        }
        View findViewById2 = findViewById(R.id.exo_buffering);
        this.E = findViewById2;
        if (findViewById2 != null) {
            findViewById2.setVisibility(8);
        }
        this.O = i11;
        TextView textView = (TextView) findViewById(R.id.exo_error_message);
        this.F = textView;
        if (textView != null) {
            textView.setVisibility(8);
        }
        PlayerControlView playerControlView = (PlayerControlView) findViewById(R.id.exo_controller);
        View findViewById3 = findViewById(R.id.exo_controller_placeholder);
        if (playerControlView != null) {
            this.G = playerControlView;
        } else if (findViewById3 != null) {
            PlayerControlView playerControlView2 = new PlayerControlView(context, attributeSet);
            this.G = playerControlView2;
            playerControlView2.setId(R.id.exo_controller);
            playerControlView2.setLayoutParams(findViewById3.getLayoutParams());
            ViewGroup viewGroup = (ViewGroup) findViewById3.getParent();
            int indexOfChild = viewGroup.indexOfChild(findViewById3);
            viewGroup.removeView(findViewById3);
            viewGroup.addView(playerControlView2, indexOfChild);
        } else {
            this.G = null;
        }
        PlayerControlView playerControlView3 = this.G;
        this.R = playerControlView3 != null ? i16 : i13;
        this.U = z7;
        this.S = z6;
        this.T = z5;
        this.K = (!z11 || playerControlView3 == null) ? i13 : 1;
        if (playerControlView3 != null) {
            playerControlView3.b();
            this.G.f5515e.add(jVar);
        }
        if (z11) {
            setClickable(true);
        }
        i();
    }

    public static void a(TextureView textureView, int i5) {
        Matrix matrix = new Matrix();
        float width = textureView.getWidth();
        float height = textureView.getHeight();
        if (width != 0.0f && height != 0.0f && i5 != 0) {
            float f2 = width / 2.0f;
            float f10 = height / 2.0f;
            matrix.postRotate(i5, f2, f10);
            RectF rectF = new RectF(0.0f, 0.0f, width, height);
            RectF rectF2 = new RectF();
            matrix.mapRect(rectF2, rectF);
            matrix.postScale(width / rectF2.width(), height / rectF2.height(), f2, f10);
        }
        textureView.setTransform(matrix);
    }

    public final boolean b() {
        Player player = this.J;
        return player != null && player.c() && this.J.g();
    }

    public final void c(boolean z5) {
        if (!(b() && this.T) && l()) {
            PlayerControlView playerControlView = this.G;
            boolean z6 = playerControlView.d() && playerControlView.getShowTimeoutMs() <= 0;
            boolean e9 = e();
            if ((z5 || z6 || e9) && l()) {
                playerControlView.setShowTimeoutMs(e9 ? 0 : this.R);
                playerControlView.e();
            }
        }
    }

    public final boolean d(Drawable drawable) {
        if (drawable != null) {
            int intrinsicWidth = drawable.getIntrinsicWidth();
            int intrinsicHeight = drawable.getIntrinsicHeight();
            if (intrinsicWidth > 0 && intrinsicHeight > 0) {
                float f2 = intrinsicWidth / intrinsicHeight;
                AspectRatioFrameLayout aspectRatioFrameLayout = this.f5543e;
                if (aspectRatioFrameLayout != null) {
                    aspectRatioFrameLayout.setAspectRatio(f2);
                }
                ImageView imageView = this.f5547x;
                imageView.setImageDrawable(drawable);
                imageView.setVisibility(0);
                return true;
            }
        }
        return false;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchKeyEvent(KeyEvent keyEvent) {
        Player player = this.J;
        if (player != null && player.c()) {
            return super.dispatchKeyEvent(keyEvent);
        }
        int keyCode = keyEvent.getKeyCode();
        boolean z5 = keyCode == 19 || keyCode == 270 || keyCode == 22 || keyCode == 271 || keyCode == 20 || keyCode == 269 || keyCode == 21 || keyCode == 268 || keyCode == 23;
        PlayerControlView playerControlView = this.G;
        if (z5 && l() && !playerControlView.d()) {
            c(true);
            return true;
        }
        if ((l() && playerControlView.a(keyEvent)) || super.dispatchKeyEvent(keyEvent)) {
            c(true);
            return true;
        }
        if (z5 && l()) {
            c(true);
        }
        return false;
    }

    public final boolean e() {
        Player player = this.J;
        if (player == null) {
            return true;
        }
        int w5 = player.w();
        if (this.S) {
            return w5 == 1 || w5 == 4 || !this.J.g();
        }
        return false;
    }

    public final void f() {
        if (!l() || this.J == null) {
            return;
        }
        PlayerControlView playerControlView = this.G;
        if (!playerControlView.d()) {
            c(true);
        } else if (this.U) {
            playerControlView.b();
        }
    }

    public final void g() {
        Player player = this.J;
        VideoSize l6 = player != null ? player.l() : VideoSize.f5575w;
        int i5 = l6.f5576d;
        int i6 = l6.f5577e;
        int i10 = l6.f5578i;
        float f2 = (i6 == 0 || i5 == 0) ? 0.0f : (i5 * l6.f5579v) / i6;
        View view = this.f5545v;
        if (view instanceof TextureView) {
            if (f2 > 0.0f && (i10 == 90 || i10 == 270)) {
                f2 = 1.0f / f2;
            }
            int i11 = this.V;
            j jVar = this.f5542d;
            if (i11 != 0) {
                view.removeOnLayoutChangeListener(jVar);
            }
            this.V = i10;
            if (i10 != 0) {
                view.addOnLayoutChangeListener(jVar);
            }
            a((TextureView) view, this.V);
        }
        float f10 = this.f5546w ? 0.0f : f2;
        AspectRatioFrameLayout aspectRatioFrameLayout = this.f5543e;
        if (aspectRatioFrameLayout != null) {
            aspectRatioFrameLayout.setAspectRatio(f10);
        }
    }

    public List<ve.i> getAdOverlayInfos() {
        ArrayList arrayList = new ArrayList();
        FrameLayout frameLayout = this.I;
        if (frameLayout != null) {
            arrayList.add(new ve.i((Object) frameLayout));
        }
        PlayerControlView playerControlView = this.G;
        if (playerControlView != null) {
            arrayList.add(new ve.i((Object) playerControlView));
        }
        return e0.k(arrayList);
    }

    public ViewGroup getAdViewGroup() {
        FrameLayout frameLayout = this.H;
        b.m(frameLayout, "exo_ad_overlay must be present for ad playback");
        return frameLayout;
    }

    public boolean getControllerAutoShow() {
        return this.S;
    }

    public boolean getControllerHideOnTouch() {
        return this.U;
    }

    public int getControllerShowTimeoutMs() {
        return this.R;
    }

    public Drawable getDefaultArtwork() {
        return this.N;
    }

    public FrameLayout getOverlayFrameLayout() {
        return this.I;
    }

    public Player getPlayer() {
        return this.J;
    }

    public int getResizeMode() {
        AspectRatioFrameLayout aspectRatioFrameLayout = this.f5543e;
        b.l(aspectRatioFrameLayout);
        return aspectRatioFrameLayout.getResizeMode();
    }

    public SubtitleView getSubtitleView() {
        return this.f5548y;
    }

    public boolean getUseArtwork() {
        return this.M;
    }

    public boolean getUseController() {
        return this.K;
    }

    public View getVideoSurfaceView() {
        return this.f5545v;
    }

    /* JADX WARN: Code restructure failed: missing block: B:11:0x001d, code lost:
    
        if (r5.J.g() == false) goto L14;
     */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0024  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void h() {
        boolean z5;
        View view = this.E;
        if (view != null) {
            Player player = this.J;
            if (player != null && player.w() == 2) {
                int i5 = this.O;
                z5 = true;
                if (i5 != 2) {
                    if (i5 == 1) {
                    }
                }
                view.setVisibility(z5 ? 0 : 8);
            }
            z5 = false;
            view.setVisibility(z5 ? 0 : 8);
        }
    }

    public final void i() {
        PlayerControlView playerControlView = this.G;
        if (playerControlView == null || !this.K) {
            setContentDescription(null);
        } else if (playerControlView.getVisibility() == 0) {
            setContentDescription(this.U ? getResources().getString(R.string.exo_controls_hide) : null);
        } else {
            setContentDescription(getResources().getString(R.string.exo_controls_show));
        }
    }

    public final void j() {
        TextView textView = this.F;
        if (textView != null) {
            CharSequence charSequence = this.Q;
            if (charSequence != null) {
                textView.setText(charSequence);
                textView.setVisibility(0);
            } else {
                Player player = this.J;
                if (player != null) {
                    player.A();
                }
                textView.setVisibility(8);
            }
        }
    }

    public final void k(boolean z5) {
        Player player = this.J;
        View view = this.f5544i;
        ImageView imageView = this.f5547x;
        boolean z6 = false;
        if (player == null || !player.E(30) || player.x().f5300d.isEmpty()) {
            if (this.P) {
                return;
            }
            if (imageView != null) {
                imageView.setImageResource(android.R.color.transparent);
                imageView.setVisibility(4);
            }
            if (view != null) {
                view.setVisibility(0);
                return;
            }
            return;
        }
        if (z5 && !this.P && view != null) {
            view.setVisibility(0);
        }
        if (player.x().a(2)) {
            if (imageView != null) {
                imageView.setImageResource(android.R.color.transparent);
                imageView.setVisibility(4);
                return;
            }
            return;
        }
        if (view != null) {
            view.setVisibility(0);
        }
        if (this.M) {
            b.l(imageView);
            byte[] bArr = player.R().G;
            if (bArr != null) {
                z6 = d(new BitmapDrawable(getResources(), BitmapFactory.decodeByteArray(bArr, 0, bArr.length)));
            }
            if (z6 || d(this.N)) {
                return;
            }
        }
        if (imageView != null) {
            imageView.setImageResource(android.R.color.transparent);
            imageView.setVisibility(4);
        }
    }

    public final boolean l() {
        if (!this.K) {
            return false;
        }
        b.l(this.G);
        return true;
    }

    @Override // android.view.View
    public final boolean onTrackballEvent(MotionEvent motionEvent) {
        if (!l() || this.J == null) {
            return false;
        }
        c(true);
        return true;
    }

    @Override // android.view.View
    public final boolean performClick() {
        f();
        return super.performClick();
    }

    public void setAspectRatioListener(a aVar) {
        AspectRatioFrameLayout aspectRatioFrameLayout = this.f5543e;
        b.l(aspectRatioFrameLayout);
        aspectRatioFrameLayout.setAspectRatioListener(aVar);
    }

    public void setControllerAutoShow(boolean z5) {
        this.S = z5;
    }

    public void setControllerHideDuringAds(boolean z5) {
        this.T = z5;
    }

    public void setControllerHideOnTouch(boolean z5) {
        b.l(this.G);
        this.U = z5;
        i();
    }

    public void setControllerShowTimeoutMs(int i5) {
        PlayerControlView playerControlView = this.G;
        b.l(playerControlView);
        this.R = i5;
        if (playerControlView.d()) {
            boolean e9 = e();
            if (l()) {
                playerControlView.setShowTimeoutMs(e9 ? 0 : this.R);
                playerControlView.e();
            }
        }
    }

    public void setControllerVisibilityListener(i iVar) {
        PlayerControlView playerControlView = this.G;
        b.l(playerControlView);
        CopyOnWriteArrayList copyOnWriteArrayList = playerControlView.f5515e;
        i iVar2 = this.L;
        if (iVar2 == iVar) {
            return;
        }
        if (iVar2 != null) {
            copyOnWriteArrayList.remove(iVar2);
        }
        this.L = iVar;
        if (iVar != null) {
            copyOnWriteArrayList.add(iVar);
        }
    }

    public void setCustomErrorMessage(CharSequence charSequence) {
        b.k(this.F != null);
        this.Q = charSequence;
        j();
    }

    public void setDefaultArtwork(Drawable drawable) {
        if (this.N != drawable) {
            this.N = drawable;
            k(false);
        }
    }

    public void setErrorMessageProvider(f fVar) {
        if (fVar != null) {
            j();
        }
    }

    public void setKeepContentOnPlayerReset(boolean z5) {
        if (this.P != z5) {
            this.P = z5;
            k(false);
        }
    }

    public void setPlayer(Player player) {
        b.k(Looper.myLooper() == Looper.getMainLooper());
        b.g(player == null || player.K() == Looper.getMainLooper());
        Player player2 = this.J;
        if (player2 == player) {
            return;
        }
        View view = this.f5545v;
        j jVar = this.f5542d;
        if (player2 != null) {
            player2.m(jVar);
            if (player2.E(27)) {
                if (view instanceof TextureView) {
                    player2.k((TextureView) view);
                } else if (view instanceof SurfaceView) {
                    player2.G((SurfaceView) view);
                }
            }
        }
        SubtitleView subtitleView = this.f5548y;
        if (subtitleView != null) {
            subtitleView.setCues(null);
        }
        this.J = player;
        boolean l6 = l();
        PlayerControlView playerControlView = this.G;
        if (l6) {
            playerControlView.setPlayer(player);
        }
        h();
        j();
        k(true);
        if (player == null) {
            if (playerControlView != null) {
                playerControlView.b();
                return;
            }
            return;
        }
        if (player.E(27)) {
            if (view instanceof TextureView) {
                player.P((TextureView) view);
            } else if (view instanceof SurfaceView) {
                player.p((SurfaceView) view);
            }
            g();
        }
        if (subtitleView != null && player.E(28)) {
            subtitleView.setCues(player.z().f5455d);
        }
        player.u(jVar);
        c(false);
    }

    public void setRepeatToggleModes(int i5) {
        PlayerControlView playerControlView = this.G;
        b.l(playerControlView);
        playerControlView.setRepeatToggleModes(i5);
    }

    public void setResizeMode(int i5) {
        AspectRatioFrameLayout aspectRatioFrameLayout = this.f5543e;
        b.l(aspectRatioFrameLayout);
        aspectRatioFrameLayout.setResizeMode(i5);
    }

    public void setShowBuffering(int i5) {
        if (this.O != i5) {
            this.O = i5;
            h();
        }
    }

    public void setShowFastForwardButton(boolean z5) {
        PlayerControlView playerControlView = this.G;
        b.l(playerControlView);
        playerControlView.setShowFastForwardButton(z5);
    }

    public void setShowMultiWindowTimeBar(boolean z5) {
        PlayerControlView playerControlView = this.G;
        b.l(playerControlView);
        playerControlView.setShowMultiWindowTimeBar(z5);
    }

    public void setShowNextButton(boolean z5) {
        PlayerControlView playerControlView = this.G;
        b.l(playerControlView);
        playerControlView.setShowNextButton(z5);
    }

    public void setShowPreviousButton(boolean z5) {
        PlayerControlView playerControlView = this.G;
        b.l(playerControlView);
        playerControlView.setShowPreviousButton(z5);
    }

    public void setShowRewindButton(boolean z5) {
        PlayerControlView playerControlView = this.G;
        b.l(playerControlView);
        playerControlView.setShowRewindButton(z5);
    }

    public void setShowShuffleButton(boolean z5) {
        PlayerControlView playerControlView = this.G;
        b.l(playerControlView);
        playerControlView.setShowShuffleButton(z5);
    }

    public void setShutterBackgroundColor(int i5) {
        View view = this.f5544i;
        if (view != null) {
            view.setBackgroundColor(i5);
        }
    }

    public void setUseArtwork(boolean z5) {
        b.k((z5 && this.f5547x == null) ? false : true);
        if (this.M != z5) {
            this.M = z5;
            k(false);
        }
    }

    public void setUseController(boolean z5) {
        boolean z6 = true;
        PlayerControlView playerControlView = this.G;
        b.k((z5 && playerControlView == null) ? false : true);
        if (!z5 && !hasOnClickListeners()) {
            z6 = false;
        }
        setClickable(z6);
        if (this.K == z5) {
            return;
        }
        this.K = z5;
        if (l()) {
            playerControlView.setPlayer(this.J);
        } else if (playerControlView != null) {
            playerControlView.b();
            playerControlView.setPlayer(null);
        }
        i();
    }

    @Override // android.view.View
    public void setVisibility(int i5) {
        super.setVisibility(i5);
        View view = this.f5545v;
        if (view instanceof SurfaceView) {
            view.setVisibility(i5);
        }
    }
}

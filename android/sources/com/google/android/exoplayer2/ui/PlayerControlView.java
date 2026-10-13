package com.google.android.exoplayer2.ui;

import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.drawable.Drawable;
import android.os.Looper;
import android.os.SystemClock;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import androidx.recyclerview.widget.h0;
import com.discord.R;
import com.discord.key_commands.KeyCommandDescriptor;
import com.google.android.exoplayer2.Player;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.ui.PlayerControlView;
import hc.e0;
import hc.s1;
import he.e;
import he.f;
import he.g;
import he.h;
import he.i;
import he.j;
import he.k;
import he.r;
import java.util.Arrays;
import java.util.Formatter;
import java.util.Iterator;
import java.util.Locale;
import java.util.concurrent.CopyOnWriteArrayList;
import ke.b;
import ke.d0;
import od.a;

/* loaded from: classes3.dex */
public final class PlayerControlView extends FrameLayout {
    public static final /* synthetic */ int A0 = 0;
    public final View E;
    public final ImageView F;
    public final ImageView G;
    public final View H;
    public final TextView I;
    public final TextView J;
    public final r K;
    public final StringBuilder L;
    public final Formatter M;
    public final s1 N;
    public final Timeline.Window O;
    public final e P;
    public final e Q;
    public final Drawable R;
    public final Drawable S;
    public final Drawable T;
    public final String U;
    public final String V;
    public final String W;
    public final Drawable a0;

    /* renamed from: b0, reason: collision with root package name */
    public final Drawable f5511b0;

    /* renamed from: c0, reason: collision with root package name */
    public final float f5512c0;

    /* renamed from: d, reason: collision with root package name */
    public final g f5513d;

    /* renamed from: d0, reason: collision with root package name */
    public final float f5514d0;

    /* renamed from: e, reason: collision with root package name */
    public final CopyOnWriteArrayList f5515e;

    /* renamed from: e0, reason: collision with root package name */
    public final String f5516e0;

    /* renamed from: f0, reason: collision with root package name */
    public final String f5517f0;

    /* renamed from: g0, reason: collision with root package name */
    public Player f5518g0;
    public boolean h0;

    /* renamed from: i, reason: collision with root package name */
    public final View f5519i;

    /* renamed from: i0, reason: collision with root package name */
    public boolean f5520i0;

    /* renamed from: j0, reason: collision with root package name */
    public boolean f5521j0;

    /* renamed from: k0, reason: collision with root package name */
    public boolean f5522k0;

    /* renamed from: l0, reason: collision with root package name */
    public int f5523l0;

    /* renamed from: m0, reason: collision with root package name */
    public int f5524m0;

    /* renamed from: n0, reason: collision with root package name */
    public int f5525n0;

    /* renamed from: o0, reason: collision with root package name */
    public boolean f5526o0;

    /* renamed from: p0, reason: collision with root package name */
    public boolean f5527p0;

    /* renamed from: q0, reason: collision with root package name */
    public boolean f5528q0;

    /* renamed from: r0, reason: collision with root package name */
    public boolean f5529r0;

    /* renamed from: s0, reason: collision with root package name */
    public boolean f5530s0;

    /* renamed from: t0, reason: collision with root package name */
    public long f5531t0;

    /* renamed from: u0, reason: collision with root package name */
    public long[] f5532u0;

    /* renamed from: v, reason: collision with root package name */
    public final View f5533v;

    /* renamed from: v0, reason: collision with root package name */
    public boolean[] f5534v0;

    /* renamed from: w, reason: collision with root package name */
    public final View f5535w;

    /* renamed from: w0, reason: collision with root package name */
    public final long[] f5536w0;

    /* renamed from: x, reason: collision with root package name */
    public final View f5537x;

    /* renamed from: x0, reason: collision with root package name */
    public final boolean[] f5538x0;

    /* renamed from: y, reason: collision with root package name */
    public final View f5539y;

    /* renamed from: y0, reason: collision with root package name */
    public long f5540y0;

    /* renamed from: z0, reason: collision with root package name */
    public long f5541z0;

    static {
        e0.a("goog.exo.ui");
    }

    /* JADX WARN: Type inference failed for: r6v1, types: [he.e] */
    /* JADX WARN: Type inference failed for: r6v2, types: [he.e] */
    public PlayerControlView(Context context, AttributeSet attributeSet) {
        super(context, null, 0);
        this.f5523l0 = 5000;
        this.f5525n0 = 0;
        this.f5524m0 = h0.DEFAULT_DRAG_ANIMATION_DURATION;
        this.f5531t0 = -9223372036854775807L;
        this.f5526o0 = true;
        this.f5527p0 = true;
        this.f5528q0 = true;
        this.f5529r0 = true;
        this.f5530s0 = false;
        int i5 = R.layout.exo_player_control_view;
        if (attributeSet != null) {
            TypedArray obtainStyledAttributes = context.getTheme().obtainStyledAttributes(attributeSet, k.f9980c, 0, 0);
            try {
                this.f5523l0 = obtainStyledAttributes.getInt(19, this.f5523l0);
                i5 = obtainStyledAttributes.getResourceId(5, R.layout.exo_player_control_view);
                this.f5525n0 = obtainStyledAttributes.getInt(8, this.f5525n0);
                this.f5526o0 = obtainStyledAttributes.getBoolean(17, this.f5526o0);
                this.f5527p0 = obtainStyledAttributes.getBoolean(14, this.f5527p0);
                this.f5528q0 = obtainStyledAttributes.getBoolean(16, this.f5528q0);
                this.f5529r0 = obtainStyledAttributes.getBoolean(15, this.f5529r0);
                this.f5530s0 = obtainStyledAttributes.getBoolean(18, this.f5530s0);
                setTimeBarMinUpdateInterval(obtainStyledAttributes.getInt(20, this.f5524m0));
            } finally {
                obtainStyledAttributes.recycle();
            }
        }
        this.f5515e = new CopyOnWriteArrayList();
        this.N = new s1();
        this.O = new Timeline.Window();
        StringBuilder sb2 = new StringBuilder();
        this.L = sb2;
        this.M = new Formatter(sb2, Locale.getDefault());
        this.f5532u0 = new long[0];
        this.f5534v0 = new boolean[0];
        this.f5536w0 = new long[0];
        this.f5538x0 = new boolean[0];
        g gVar = new g(this);
        this.f5513d = gVar;
        final int i6 = 0;
        this.P = new Runnable(this) { // from class: he.e

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ PlayerControlView f9974e;

            {
                this.f9974e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                int i10 = i6;
                PlayerControlView playerControlView = this.f9974e;
                switch (i10) {
                    case 0:
                        int i11 = PlayerControlView.A0;
                        playerControlView.i();
                        break;
                    default:
                        playerControlView.b();
                        break;
                }
            }
        };
        final int i10 = 1;
        this.Q = new Runnable(this) { // from class: he.e

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ PlayerControlView f9974e;

            {
                this.f9974e = this;
            }

            @Override // java.lang.Runnable
            public final void run() {
                int i102 = i10;
                PlayerControlView playerControlView = this.f9974e;
                switch (i102) {
                    case 0:
                        int i11 = PlayerControlView.A0;
                        playerControlView.i();
                        break;
                    default:
                        playerControlView.b();
                        break;
                }
            }
        };
        LayoutInflater.from(context).inflate(i5, this);
        setDescendantFocusability(KeyCommandDescriptor.ModifierFlags.CONTROL);
        r rVar = (r) findViewById(R.id.exo_progress);
        View findViewById = findViewById(R.id.exo_progress_placeholder);
        if (rVar != null) {
            this.K = rVar;
        } else if (findViewById != null) {
            DefaultTimeBar defaultTimeBar = new DefaultTimeBar(context, null, attributeSet);
            defaultTimeBar.setId(R.id.exo_progress);
            defaultTimeBar.setLayoutParams(findViewById.getLayoutParams());
            ViewGroup viewGroup = (ViewGroup) findViewById.getParent();
            int indexOfChild = viewGroup.indexOfChild(findViewById);
            viewGroup.removeView(findViewById);
            viewGroup.addView(defaultTimeBar, indexOfChild);
            this.K = defaultTimeBar;
        } else {
            this.K = null;
        }
        this.I = (TextView) findViewById(R.id.exo_duration);
        this.J = (TextView) findViewById(R.id.exo_position);
        r rVar2 = this.K;
        if (rVar2 != null) {
            ((DefaultTimeBar) rVar2).U.add(gVar);
        }
        View findViewById2 = findViewById(R.id.exo_play);
        this.f5535w = findViewById2;
        if (findViewById2 != null) {
            findViewById2.setOnClickListener(gVar);
        }
        View findViewById3 = findViewById(R.id.exo_pause);
        this.f5537x = findViewById3;
        if (findViewById3 != null) {
            findViewById3.setOnClickListener(gVar);
        }
        View findViewById4 = findViewById(R.id.exo_prev);
        this.f5519i = findViewById4;
        if (findViewById4 != null) {
            findViewById4.setOnClickListener(gVar);
        }
        View findViewById5 = findViewById(R.id.exo_next);
        this.f5533v = findViewById5;
        if (findViewById5 != null) {
            findViewById5.setOnClickListener(gVar);
        }
        View findViewById6 = findViewById(R.id.exo_rew);
        this.E = findViewById6;
        if (findViewById6 != null) {
            findViewById6.setOnClickListener(gVar);
        }
        View findViewById7 = findViewById(R.id.exo_ffwd);
        this.f5539y = findViewById7;
        if (findViewById7 != null) {
            findViewById7.setOnClickListener(gVar);
        }
        ImageView imageView = (ImageView) findViewById(R.id.exo_repeat_toggle);
        this.F = imageView;
        if (imageView != null) {
            imageView.setOnClickListener(gVar);
        }
        ImageView imageView2 = (ImageView) findViewById(R.id.exo_shuffle);
        this.G = imageView2;
        if (imageView2 != null) {
            imageView2.setOnClickListener(gVar);
        }
        View findViewById8 = findViewById(R.id.exo_vr);
        this.H = findViewById8;
        setShowVrButton(false);
        f(findViewById8, false, false);
        Resources resources = context.getResources();
        this.f5512c0 = resources.getInteger(R.integer.exo_media_button_opacity_percentage_enabled) / 100.0f;
        this.f5514d0 = resources.getInteger(R.integer.exo_media_button_opacity_percentage_disabled) / 100.0f;
        this.R = d0.r(context, resources, R.drawable.exo_controls_repeat_off);
        this.S = d0.r(context, resources, R.drawable.exo_controls_repeat_one);
        this.T = d0.r(context, resources, R.drawable.exo_controls_repeat_all);
        this.a0 = d0.r(context, resources, R.drawable.exo_controls_shuffle_on);
        this.f5511b0 = d0.r(context, resources, R.drawable.exo_controls_shuffle_off);
        this.U = resources.getString(R.string.exo_controls_repeat_off_description);
        this.V = resources.getString(R.string.exo_controls_repeat_one_description);
        this.W = resources.getString(R.string.exo_controls_repeat_all_description);
        this.f5516e0 = resources.getString(R.string.exo_controls_shuffle_on_description);
        this.f5517f0 = resources.getString(R.string.exo_controls_shuffle_off_description);
        this.f5541z0 = -9223372036854775807L;
    }

    public final boolean a(KeyEvent keyEvent) {
        int keyCode = keyEvent.getKeyCode();
        Player player = this.f5518g0;
        if (player == null) {
            return false;
        }
        if (keyCode != 90 && keyCode != 89 && keyCode != 85 && keyCode != 79 && keyCode != 126 && keyCode != 127 && keyCode != 87 && keyCode != 88) {
            return false;
        }
        if (keyEvent.getAction() == 0) {
            if (keyCode == 90) {
                if (player.w() != 4) {
                    player.O();
                }
            } else if (keyCode == 89) {
                player.Q();
            } else if (keyEvent.getRepeatCount() == 0) {
                if (keyCode == 79 || keyCode == 85) {
                    if (d0.R(player)) {
                        d0.C(player);
                    } else if (player.E(1)) {
                        player.pause();
                    }
                } else if (keyCode == 87) {
                    player.N();
                } else if (keyCode == 88) {
                    player.q();
                } else if (keyCode == 126) {
                    d0.C(player);
                } else if (keyCode == 127) {
                    int i5 = d0.a;
                    if (player.E(1)) {
                        player.pause();
                    }
                }
            }
        }
        return true;
    }

    public final void b() {
        if (d()) {
            setVisibility(8);
            Iterator it = this.f5515e.iterator();
            while (it.hasNext()) {
                i iVar = (i) it.next();
                getVisibility();
                ((j) iVar).f9978i.i();
            }
            removeCallbacks(this.P);
            removeCallbacks(this.Q);
            this.f5531t0 = -9223372036854775807L;
        }
    }

    public final void c() {
        e eVar = this.Q;
        removeCallbacks(eVar);
        if (this.f5523l0 <= 0) {
            this.f5531t0 = -9223372036854775807L;
            return;
        }
        long uptimeMillis = SystemClock.uptimeMillis();
        long j = this.f5523l0;
        this.f5531t0 = uptimeMillis + j;
        if (this.h0) {
            postDelayed(eVar, j);
        }
    }

    public final boolean d() {
        return getVisibility() == 0;
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchKeyEvent(KeyEvent keyEvent) {
        return a(keyEvent) || super.dispatchKeyEvent(keyEvent);
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean dispatchTouchEvent(MotionEvent motionEvent) {
        if (motionEvent.getAction() == 0) {
            removeCallbacks(this.Q);
        } else if (motionEvent.getAction() == 1) {
            c();
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    public final void e() {
        if (!d()) {
            setVisibility(0);
            Iterator it = this.f5515e.iterator();
            while (it.hasNext()) {
                i iVar = (i) it.next();
                getVisibility();
                ((j) iVar).f9978i.i();
            }
            h();
            g();
            j();
            k();
            l();
            boolean R = d0.R(this.f5518g0);
            View view = this.f5537x;
            View view2 = this.f5535w;
            if (R && view2 != null) {
                view2.requestFocus();
            } else if (!R && view != null) {
                view.requestFocus();
            }
            boolean R2 = d0.R(this.f5518g0);
            if (R2 && view2 != null) {
                view2.sendAccessibilityEvent(8);
            } else if (!R2 && view != null) {
                view.sendAccessibilityEvent(8);
            }
        }
        c();
    }

    public final void f(View view, boolean z5, boolean z6) {
        if (view == null) {
            return;
        }
        view.setEnabled(z6);
        view.setAlpha(z6 ? this.f5512c0 : this.f5514d0);
        view.setVisibility(z5 ? 0 : 8);
    }

    public final void g() {
        boolean z5;
        boolean z6;
        boolean z7;
        boolean z8;
        boolean z10;
        if (d() && this.h0) {
            Player player = this.f5518g0;
            if (player != null) {
                z5 = player.E(5);
                z7 = player.E(7);
                z8 = player.E(11);
                z10 = player.E(12);
                z6 = player.E(9);
            } else {
                z5 = false;
                z6 = false;
                z7 = false;
                z8 = false;
                z10 = false;
            }
            f(this.f5519i, this.f5528q0, z7);
            f(this.E, this.f5526o0, z8);
            f(this.f5539y, this.f5527p0, z10);
            f(this.f5533v, this.f5529r0, z6);
            r rVar = this.K;
            if (rVar != null) {
                rVar.setEnabled(z5);
            }
        }
    }

    public Player getPlayer() {
        return this.f5518g0;
    }

    public int getRepeatToggleModes() {
        return this.f5525n0;
    }

    public boolean getShowShuffleButton() {
        return this.f5530s0;
    }

    public int getShowTimeoutMs() {
        return this.f5523l0;
    }

    public boolean getShowVrButton() {
        View view = this.H;
        return view != null && view.getVisibility() == 0;
    }

    public final void h() {
        boolean z5;
        boolean z6;
        if (d() && this.h0) {
            boolean R = d0.R(this.f5518g0);
            View view = this.f5535w;
            boolean z7 = true;
            if (view != null) {
                z5 = !R && view.isFocused();
                z6 = d0.a < 21 ? z5 : !R && f.a(view);
                view.setVisibility(R ? 0 : 8);
            } else {
                z5 = false;
                z6 = false;
            }
            View view2 = this.f5537x;
            if (view2 != null) {
                z5 |= R && view2.isFocused();
                if (d0.a < 21) {
                    z7 = z5;
                } else if (!R || !f.a(view2)) {
                    z7 = false;
                }
                z6 |= z7;
                view2.setVisibility(R ? 8 : 0);
            }
            if (z5) {
                boolean R2 = d0.R(this.f5518g0);
                if (R2 && view != null) {
                    view.requestFocus();
                } else if (!R2 && view2 != null) {
                    view2.requestFocus();
                }
            }
            if (z6) {
                boolean R3 = d0.R(this.f5518g0);
                if (R3 && view != null) {
                    view.sendAccessibilityEvent(8);
                } else {
                    if (R3 || view2 == null) {
                        return;
                    }
                    view2.sendAccessibilityEvent(8);
                }
            }
        }
    }

    public final void i() {
        long j;
        long j5;
        if (d() && this.h0) {
            Player player = this.f5518g0;
            if (player != null) {
                j = player.t() + this.f5540y0;
                j5 = player.M() + this.f5540y0;
            } else {
                j = 0;
                j5 = 0;
            }
            boolean z5 = j != this.f5541z0;
            this.f5541z0 = j;
            TextView textView = this.J;
            if (textView != null && !this.f5522k0 && z5) {
                textView.setText(d0.z(this.L, this.M, j));
            }
            r rVar = this.K;
            if (rVar != null) {
                rVar.setPosition(j);
                rVar.setBufferedPosition(j5);
            }
            e eVar = this.P;
            removeCallbacks(eVar);
            int w5 = player == null ? 1 : player.w();
            if (player != null && player.y()) {
                long min = Math.min(rVar != null ? rVar.getPreferredUpdateDelay() : 1000L, 1000 - (j % 1000));
                float f2 = player.b().f5275d;
                postDelayed(eVar, d0.j(f2 > 0.0f ? (long) (min / f2) : 1000L, this.f5524m0, 1000L));
            } else {
                if (w5 == 4 || w5 == 1) {
                    return;
                }
                postDelayed(eVar, 1000L);
            }
        }
    }

    public final void j() {
        ImageView imageView;
        if (d() && this.h0 && (imageView = this.F) != null) {
            if (this.f5525n0 == 0) {
                f(imageView, false, false);
                return;
            }
            Player player = this.f5518g0;
            String str = this.U;
            Drawable drawable = this.R;
            if (player == null) {
                f(imageView, true, false);
                imageView.setImageDrawable(drawable);
                imageView.setContentDescription(str);
                return;
            }
            f(imageView, true, true);
            int I = player.I();
            if (I == 0) {
                imageView.setImageDrawable(drawable);
                imageView.setContentDescription(str);
            } else if (I == 1) {
                imageView.setImageDrawable(this.S);
                imageView.setContentDescription(this.V);
            } else if (I == 2) {
                imageView.setImageDrawable(this.T);
                imageView.setContentDescription(this.W);
            }
            imageView.setVisibility(0);
        }
    }

    public final void k() {
        ImageView imageView;
        if (d() && this.h0 && (imageView = this.G) != null) {
            Player player = this.f5518g0;
            if (!this.f5530s0) {
                f(imageView, false, false);
                return;
            }
            String str = this.f5517f0;
            Drawable drawable = this.f5511b0;
            if (player == null) {
                f(imageView, true, false);
                imageView.setImageDrawable(drawable);
                imageView.setContentDescription(str);
                return;
            }
            f(imageView, true, true);
            if (player.L()) {
                drawable = this.a0;
            }
            imageView.setImageDrawable(drawable);
            if (player.L()) {
                str = this.f5516e0;
            }
            imageView.setContentDescription(str);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0049  */
    /* JADX WARN: Removed duplicated region for block: B:79:0x0156  */
    /* JADX WARN: Removed duplicated region for block: B:82:0x0165  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x014a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void l() {
        boolean z5;
        Timeline J;
        boolean z6;
        int i5;
        TextView textView;
        r rVar;
        int i6;
        Timeline timeline;
        boolean z7;
        boolean z8;
        Player player = this.f5518g0;
        if (player == null) {
            return;
        }
        boolean z10 = this.f5520i0;
        long j = -9223372036854775807L;
        long j5 = 0;
        Timeline.Window window = this.O;
        boolean z11 = false;
        boolean z12 = true;
        if (z10) {
            Timeline J2 = player.J();
            if (J2.o() <= 100) {
                int o6 = J2.o();
                for (int i10 = 0; i10 < o6; i10++) {
                    if (J2.m(i10, window, 0L).K != -9223372036854775807L) {
                    }
                }
                z5 = true;
                this.f5521j0 = z5;
                this.f5540y0 = 0L;
                J = player.J();
                if (J.p()) {
                    int D = player.D();
                    boolean z13 = this.f5521j0;
                    int i11 = z13 ? 0 : D;
                    int o7 = z13 ? J.o() - 1 : D;
                    long j7 = 0;
                    i5 = 0;
                    while (true) {
                        if (i11 > o7) {
                            break;
                        }
                        long j10 = j;
                        if (i11 == D) {
                            this.f5540y0 = d0.U(j7);
                        }
                        J.n(i11, window);
                        if (window.K == j10) {
                            b.k(this.f5521j0 ^ z12);
                            break;
                        }
                        int i12 = window.L;
                        while (i12 <= window.M) {
                            s1 s1Var = this.N;
                            J.f(i12, s1Var, z11);
                            long j11 = j5;
                            od.b bVar = s1Var.f9875y;
                            int i13 = bVar.f15835v;
                            int i14 = bVar.f15832d;
                            while (i13 < i14) {
                                long d6 = s1Var.d(i13);
                                if (d6 == Long.MIN_VALUE) {
                                    long j12 = s1Var.f9872v;
                                    if (j12 != j10) {
                                        d6 = j12;
                                    }
                                    i6 = D;
                                    timeline = J;
                                    z7 = true;
                                    i13++;
                                    z12 = z7;
                                    D = i6;
                                    J = timeline;
                                    j10 = -9223372036854775807L;
                                }
                                long j13 = d6 + s1Var.f9873w;
                                if (j13 >= j11) {
                                    long[] jArr = this.f5532u0;
                                    if (i5 == jArr.length) {
                                        int length = jArr.length == 0 ? 1 : jArr.length * 2;
                                        this.f5532u0 = Arrays.copyOf(jArr, length);
                                        this.f5534v0 = Arrays.copyOf(this.f5534v0, length);
                                    }
                                    this.f5532u0[i5] = d0.U(j7 + j13);
                                    boolean[] zArr = this.f5534v0;
                                    a a = s1Var.f9875y.a(i13);
                                    int i15 = a.f15824e;
                                    i6 = D;
                                    if (i15 == -1) {
                                        timeline = J;
                                        z7 = true;
                                        z8 = true;
                                    } else {
                                        int i16 = 0;
                                        while (i16 < i15) {
                                            int i17 = i16;
                                            int i18 = a.f15827w[i17];
                                            timeline = J;
                                            z7 = true;
                                            if (i18 == 0 || i18 == 1) {
                                                z8 = true;
                                                break;
                                            } else {
                                                i16 = i17 + 1;
                                                J = timeline;
                                            }
                                        }
                                        timeline = J;
                                        z7 = true;
                                        z8 = false;
                                    }
                                    zArr[i5] = !z8;
                                    i5++;
                                    i13++;
                                    z12 = z7;
                                    D = i6;
                                    J = timeline;
                                    j10 = -9223372036854775807L;
                                }
                                i6 = D;
                                timeline = J;
                                z7 = true;
                                i13++;
                                z12 = z7;
                                D = i6;
                                J = timeline;
                                j10 = -9223372036854775807L;
                            }
                            i12++;
                            j5 = j11;
                            J = J;
                            z11 = false;
                            j10 = -9223372036854775807L;
                        }
                        j7 += window.K;
                        i11++;
                        J = J;
                        j = -9223372036854775807L;
                        z11 = false;
                    }
                    z6 = z12;
                    j5 = j7;
                } else {
                    z6 = true;
                    i5 = 0;
                }
                long U = d0.U(j5);
                textView = this.I;
                if (textView != null) {
                    textView.setText(d0.z(this.L, this.M, U));
                }
                rVar = this.K;
                if (rVar != null) {
                    rVar.setDuration(U);
                    long[] jArr2 = this.f5536w0;
                    int length2 = jArr2.length;
                    int i19 = i5 + length2;
                    long[] jArr3 = this.f5532u0;
                    if (i19 > jArr3.length) {
                        this.f5532u0 = Arrays.copyOf(jArr3, i19);
                        this.f5534v0 = Arrays.copyOf(this.f5534v0, i19);
                    }
                    System.arraycopy(jArr2, 0, this.f5532u0, i5, length2);
                    System.arraycopy(this.f5538x0, 0, this.f5534v0, i5, length2);
                    long[] jArr4 = this.f5532u0;
                    boolean[] zArr2 = this.f5534v0;
                    DefaultTimeBar defaultTimeBar = (DefaultTimeBar) rVar;
                    b.g((i19 == 0 || !(jArr4 == null || zArr2 == null)) ? z6 : false);
                    defaultTimeBar.f5504k0 = i19;
                    defaultTimeBar.f5505l0 = jArr4;
                    defaultTimeBar.f5506m0 = zArr2;
                    defaultTimeBar.e();
                }
                i();
            }
        }
        z5 = false;
        this.f5521j0 = z5;
        this.f5540y0 = 0L;
        J = player.J();
        if (J.p()) {
        }
        long U2 = d0.U(j5);
        textView = this.I;
        if (textView != null) {
        }
        rVar = this.K;
        if (rVar != null) {
        }
        i();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.h0 = true;
        long j = this.f5531t0;
        if (j != -9223372036854775807L) {
            long uptimeMillis = j - SystemClock.uptimeMillis();
            if (uptimeMillis <= 0) {
                b();
            } else {
                postDelayed(this.Q, uptimeMillis);
            }
        } else if (d()) {
            c();
        }
        h();
        g();
        j();
        k();
        l();
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.h0 = false;
        removeCallbacks(this.P);
        removeCallbacks(this.Q);
    }

    public void setPlayer(Player player) {
        b.k(Looper.myLooper() == Looper.getMainLooper());
        b.g(player == null || player.K() == Looper.getMainLooper());
        Player player2 = this.f5518g0;
        if (player2 == player) {
            return;
        }
        g gVar = this.f5513d;
        if (player2 != null) {
            player2.m(gVar);
        }
        this.f5518g0 = player;
        if (player != null) {
            player.u(gVar);
        }
        h();
        g();
        j();
        k();
        l();
    }

    public void setRepeatToggleModes(int i5) {
        this.f5525n0 = i5;
        Player player = this.f5518g0;
        if (player != null) {
            int I = player.I();
            if (i5 == 0 && I != 0) {
                this.f5518g0.F(0);
            } else if (i5 == 1 && I == 2) {
                this.f5518g0.F(1);
            } else if (i5 == 2 && I == 1) {
                this.f5518g0.F(2);
            }
        }
        j();
    }

    public void setShowFastForwardButton(boolean z5) {
        this.f5527p0 = z5;
        g();
    }

    public void setShowMultiWindowTimeBar(boolean z5) {
        this.f5520i0 = z5;
        l();
    }

    public void setShowNextButton(boolean z5) {
        this.f5529r0 = z5;
        g();
    }

    public void setShowPreviousButton(boolean z5) {
        this.f5528q0 = z5;
        g();
    }

    public void setShowRewindButton(boolean z5) {
        this.f5526o0 = z5;
        g();
    }

    public void setShowShuffleButton(boolean z5) {
        this.f5530s0 = z5;
        k();
    }

    public void setShowTimeoutMs(int i5) {
        this.f5523l0 = i5;
        if (d()) {
            c();
        }
    }

    public void setShowVrButton(boolean z5) {
        View view = this.H;
        if (view != null) {
            view.setVisibility(z5 ? 0 : 8);
        }
    }

    public void setTimeBarMinUpdateInterval(int i5) {
        this.f5524m0 = d0.i(i5, 16, 1000);
    }

    public void setVrButtonListener(View.OnClickListener onClickListener) {
        View view = this.H;
        if (view != null) {
            view.setOnClickListener(onClickListener);
            f(view, getShowVrButton(), onClickListener != null);
        }
    }

    public void setProgressUpdateListener(h hVar) {
    }
}

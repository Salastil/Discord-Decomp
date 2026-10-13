package hc;

import android.content.Context;
import android.os.Looper;
import com.google.android.exoplayer2.audio.AudioAttributes;

/* loaded from: classes3.dex */
public final class n {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final ke.y f9795b;

    /* renamed from: c, reason: collision with root package name */
    public final app.rive.runtime.kotlin.core.a f9796c;

    /* renamed from: d, reason: collision with root package name */
    public final com.discord.chat.input.views.d f9797d;

    /* renamed from: e, reason: collision with root package name */
    public ei.j f9798e;

    /* renamed from: f, reason: collision with root package name */
    public ei.j f9799f;

    /* renamed from: g, reason: collision with root package name */
    public ei.j f9800g;

    /* renamed from: h, reason: collision with root package name */
    public final Looper f9801h;

    /* renamed from: i, reason: collision with root package name */
    public final AudioAttributes f9802i;
    public final int j;
    public final boolean k;

    /* renamed from: l, reason: collision with root package name */
    public final p1 f9803l;

    /* renamed from: m, reason: collision with root package name */
    public final long f9804m;

    /* renamed from: n, reason: collision with root package name */
    public final long f9805n;

    /* renamed from: o, reason: collision with root package name */
    public final i f9806o;

    /* renamed from: p, reason: collision with root package name */
    public final long f9807p;

    /* renamed from: q, reason: collision with root package name */
    public final long f9808q;

    /* renamed from: r, reason: collision with root package name */
    public final boolean f9809r;

    /* renamed from: s, reason: collision with root package name */
    public boolean f9810s;

    public n(Context context, b bVar) {
        app.rive.runtime.kotlin.core.a aVar = new app.rive.runtime.kotlin.core.a(29, bVar);
        int i5 = 2;
        com.discord.chat.input.views.d dVar = new com.discord.chat.input.views.d(context, i5);
        com.discord.chat.input.views.d dVar2 = new com.discord.chat.input.views.d(context, 3);
        hb.a aVar2 = new hb.a(i5);
        com.discord.chat.input.views.d dVar3 = new com.discord.chat.input.views.d(context, 4);
        context.getClass();
        this.a = context;
        this.f9796c = aVar;
        this.f9797d = dVar;
        this.f9798e = dVar2;
        this.f9799f = aVar2;
        this.f9800g = dVar3;
        int i6 = ke.d0.a;
        Looper myLooper = Looper.myLooper();
        this.f9801h = myLooper == null ? Looper.getMainLooper() : myLooper;
        this.f9802i = AudioAttributes.f5336y;
        this.j = 1;
        this.k = true;
        this.f9803l = p1.f9840c;
        this.f9804m = 5000L;
        this.f9805n = 15000L;
        this.f9806o = new i(ke.d0.I(20L), ke.d0.I(500L));
        this.f9795b = ke.y.a;
        this.f9807p = 500L;
        this.f9808q = 2000L;
        this.f9809r = true;
    }
}

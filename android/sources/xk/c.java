package xk;

import android.media.MediaFormat;
import com.linkedin.android.litr.io.MediaRange;
import kotlin.jvm.internal.LongCompanionObject;
import wk.e;

/* loaded from: classes3.dex */
public abstract class c {
    public final vk.a a;

    /* renamed from: b, reason: collision with root package name */
    public final vk.b f20508b;

    /* renamed from: c, reason: collision with root package name */
    public final e f20509c;

    /* renamed from: d, reason: collision with root package name */
    public final rk.b f20510d;

    /* renamed from: e, reason: collision with root package name */
    public final rk.b f20511e;

    /* renamed from: f, reason: collision with root package name */
    public final MediaRange f20512f;

    /* renamed from: g, reason: collision with root package name */
    public final int f20513g;

    /* renamed from: h, reason: collision with root package name */
    public int f20514h;

    /* renamed from: i, reason: collision with root package name */
    public boolean f20515i;
    public MediaFormat j;
    public final long k;

    /* renamed from: l, reason: collision with root package name */
    public float f20516l;

    public c(int i5, int i6, MediaFormat mediaFormat, rk.b bVar, rk.b bVar2, vk.a aVar, vk.b bVar3, e eVar) {
        this.k = -1L;
        this.a = aVar;
        this.f20513g = i5;
        this.f20514h = i6;
        this.f20508b = bVar3;
        this.j = mediaFormat;
        this.f20509c = eVar;
        this.f20510d = bVar;
        this.f20511e = bVar2;
        MediaRange selection = aVar.getSelection();
        this.f20512f = selection;
        MediaFormat trackFormat = aVar.getTrackFormat(i5);
        if (trackFormat.containsKey("durationUs")) {
            long j = trackFormat.getLong("durationUs");
            this.k = j;
            if (mediaFormat != null) {
                mediaFormat.setLong("durationUs", j);
            }
        }
        selection.getClass();
        this.k = Math.min(this.k, LongCompanionObject.MAX_VALUE);
    }

    public static void a(MediaFormat mediaFormat, MediaFormat mediaFormat2) {
        if (!mediaFormat2.containsKey("durationUs") && mediaFormat.containsKey("durationUs")) {
            mediaFormat2.setLong("durationUs", mediaFormat.getLong("durationUs"));
        }
        if (mediaFormat2.containsKey("language") || !mediaFormat.containsKey("language")) {
            return;
        }
        mediaFormat2.setString("language", mediaFormat.getString("language"));
    }

    public final int b() {
        vk.a aVar;
        do {
            aVar = this.a;
            if (aVar.getSampleTrackIndex() != this.f20513g) {
                return 5;
            }
            aVar.advance();
        } while ((aVar.getSampleFlags() & 4) == 0);
        return 4;
    }

    public void c() {
        rk.b bVar = this.f20510d;
        bVar.getClass();
        try {
            bVar.f17403b.getName();
        } catch (IllegalStateException e9) {
            throw new sk.e(7, null, e9);
        }
    }

    public void d() {
        rk.b bVar = this.f20511e;
        bVar.getClass();
        try {
            bVar.f17403b.getName();
        } catch (IllegalStateException e9) {
            throw new sk.e(7, null, e9);
        }
    }

    public abstract int e();

    public abstract void f();

    public abstract void g();
}

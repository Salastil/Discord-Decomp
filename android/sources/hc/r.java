package hc;

import com.google.android.exoplayer2.Player;

/* loaded from: classes3.dex */
public final /* synthetic */ class r implements ke.k, ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ com.google.android.exoplayer2.d f9855d;

    public /* synthetic */ r(com.google.android.exoplayer2.d dVar) {
        this.f9855d = dVar;
    }

    @Override // ke.k
    public void d(Object obj, ke.g gVar) {
        ((com.google.android.exoplayer2.h) obj).onEvents(this.f9855d.f5356f, new Player.Events(gVar));
    }

    @Override // ke.j
    public void invoke(Object obj) {
        ((com.google.android.exoplayer2.h) obj).onAvailableCommandsChanged(this.f9855d.L);
    }
}

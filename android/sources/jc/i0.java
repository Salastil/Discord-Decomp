package jc;

import android.media.AudioTrack;
import android.media.AudioTrack$StreamEventCallback;

/* loaded from: classes3.dex */
public final class i0 extends AudioTrack$StreamEventCallback {
    public final /* synthetic */ j0 a;

    public i0(j0 j0Var) {
        this.a = j0Var;
    }

    public final void onDataRequest(AudioTrack audioTrack, int i5) {
        k0 k0Var;
        ve.i iVar;
        hc.z zVar;
        if (audioTrack.equals(this.a.f12538c.f12567v) && (iVar = (k0Var = this.a.f12538c).f12563r) != null && k0Var.V && (zVar = ((n0) iVar.f19405d).f12586n1) != null) {
            zVar.a.E.d(2);
        }
    }

    public final void onTearDown(AudioTrack audioTrack) {
        k0 k0Var;
        ve.i iVar;
        hc.z zVar;
        if (audioTrack.equals(this.a.f12538c.f12567v) && (iVar = (k0Var = this.a.f12538c).f12563r) != null && k0Var.V && (zVar = ((n0) iVar.f19405d).f12586n1) != null) {
            zVar.a.E.d(2);
        }
    }
}

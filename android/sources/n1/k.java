package n1;

import android.net.Uri;
import android.os.Bundle;
import com.facebook.react.bridge.queue.QueueThreadExceptionHandler;
import com.google.android.exoplayer2.Format;
import com.google.firebase.concurrent.ExecutorsRegistrar;
import com.google.firebase.datatransport.TransportRegistrar;
import fi.c0;
import fi.e0;
import fi.r0;
import java.lang.reflect.Constructor;
import java.util.ArrayList;
import java.util.concurrent.ScheduledExecutorService;
import nd.a1;
import nd.n0;
import nd.z0;
import org.webrtc.EglThread;

/* loaded from: classes.dex */
public final /* synthetic */ class k implements nc.q, hc.f, oh.z, ni.e, EglThread.ReleaseMonitor, QueueThreadExceptionHandler {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f14721d;

    public /* synthetic */ k(int i5) {
        this.f14721d = i5;
    }

    @Override // hc.f
    public hc.g a(Bundle bundle) {
        r0 v5;
        od.a[] aVarArr;
        switch (this.f14721d) {
            case 8:
                ArrayList parcelableArrayList = bundle.getParcelableArrayList(z0.f15206x);
                if (parcelableArrayList == null) {
                    c0 c0Var = e0.f8656e;
                    v5 = r0.f8704w;
                } else {
                    v5 = ke.b.v(Format.M0, parcelableArrayList);
                }
                return new z0(bundle.getString(z0.f15207y, ""), (Format[]) v5.toArray(new Format[0]));
            case 9:
                ArrayList parcelableArrayList2 = bundle.getParcelableArrayList(a1.f15064w);
                return parcelableArrayList2 == null ? new a1(new z0[0]) : new a1((z0[]) ke.b.v(z0.E, parcelableArrayList2).toArray(new z0[0]));
            case 10:
            default:
                long j = bundle.getLong(od.a.F);
                int i5 = bundle.getInt(od.a.G);
                int i6 = bundle.getInt(od.a.M);
                ArrayList parcelableArrayList3 = bundle.getParcelableArrayList(od.a.H);
                int[] intArray = bundle.getIntArray(od.a.I);
                long[] longArray = bundle.getLongArray(od.a.J);
                long j5 = bundle.getLong(od.a.K);
                boolean z5 = bundle.getBoolean(od.a.L);
                int[] iArr = intArray;
                if (iArr == null) {
                    iArr = new int[0];
                }
                Uri[] uriArr = parcelableArrayList3 == null ? new Uri[0] : (Uri[]) parcelableArrayList3.toArray(new Uri[0]);
                if (longArray == null) {
                    longArray = new long[0];
                }
                return new od.a(j, i5, i6, iArr, uriArr, longArray, j5, z5);
            case 11:
                ArrayList parcelableArrayList4 = bundle.getParcelableArrayList(od.b.E);
                if (parcelableArrayList4 == null) {
                    aVarArr = new od.a[0];
                } else {
                    od.a[] aVarArr2 = new od.a[parcelableArrayList4.size()];
                    for (int i10 = 0; i10 < parcelableArrayList4.size(); i10++) {
                        aVarArr2[i10] = (od.a) od.a.N.a((Bundle) parcelableArrayList4.get(i10));
                    }
                    aVarArr = aVarArr2;
                }
                return new od.b(aVarArr, bundle.getLong(od.b.F, 0L), bundle.getLong(od.b.G, -9223372036854775807L), bundle.getInt(od.b.H, 0));
        }
    }

    public void b(Object obj) {
        ((n0) obj).f15143b.release();
    }

    public Constructor c() {
        switch (this.f14721d) {
            case 23:
                if (Boolean.TRUE.equals(Class.forName("com.google.android.exoplayer2.ext.flac.FlacLibrary").getMethod("isAvailable", null).invoke(null, null))) {
                    return Class.forName("com.google.android.exoplayer2.ext.flac.FlacExtractor").asSubclass(qc.j.class).getConstructor(Integer.TYPE);
                }
                return null;
            default:
                return Class.forName("com.google.android.exoplayer2.decoder.midi.MidiExtractor").asSubclass(qc.j.class).getConstructor(null);
        }
    }

    @Override // ni.e
    public Object g(am.f fVar) {
        tb.f lambda$getComponents$0;
        tb.f lambda$getComponents$1;
        tb.f lambda$getComponents$2;
        switch (this.f14721d) {
            case 14:
                return (ScheduledExecutorService) ExecutorsRegistrar.a.get();
            case 15:
                return (ScheduledExecutorService) ExecutorsRegistrar.f6185c.get();
            case 16:
                return (ScheduledExecutorService) ExecutorsRegistrar.f6184b.get();
            case 17:
                ni.m mVar = ExecutorsRegistrar.a;
                return oi.i.f15997d;
            case 18:
            case 19:
            default:
                lambda$getComponents$2 = TransportRegistrar.lambda$getComponents$2(fVar);
                return lambda$getComponents$2;
            case 20:
                lambda$getComponents$0 = TransportRegistrar.lambda$getComponents$0(fVar);
                return lambda$getComponents$0;
            case 21:
                lambda$getComponents$1 = TransportRegistrar.lambda$getComponents$1(fVar);
                return lambda$getComponents$1;
        }
    }

    @Override // com.facebook.react.bridge.queue.QueueThreadExceptionHandler
    public void handleException(Exception exc) {
        throw new RuntimeException(exc);
    }

    @Override // org.webrtc.EglThread.ReleaseMonitor
    public boolean onRelease(EglThread eglThread) {
        boolean lambda$create$1;
        lambda$create$1 = EglThread.lambda$create$1(eglThread);
        return lambda$create$1;
    }

    @Override // nc.q
    public void release() {
    }
}

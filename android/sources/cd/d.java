package cd;

import android.content.DialogInterface;
import android.media.MediaCodec;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import android.util.Pair;
import com.discord.media.utils.Transcoder$convertCompress$3$2;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.views.progressbar.ReactProgressBarViewManager;
import com.google.android.exoplayer2.SimpleExoPlayer;
import com.google.android.exoplayer2.Timeline;
import fi.c0;
import fi.e0;
import java.lang.ref.WeakReference;
import java.util.ArrayDeque;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.concurrent.atomic.AtomicReference;
import ke.d0;

/* loaded from: classes3.dex */
public final class d extends Handler {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public Object f3412b;

    public /* synthetic */ d() {
        this.a = 2;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // android.os.Handler
    public final void handleMessage(Message message) {
        SimpleExoPlayer simpleExoPlayer;
        Set set;
        switch (this.a) {
            case 0:
                f fVar = (f) this.f3412b;
                fVar.getClass();
                int i5 = message.what;
                if (i5 == 0) {
                    e eVar = (e) message.obj;
                    try {
                        fVar.a.queueInputBuffer(eVar.a, 0, eVar.f3413b, eVar.f3415d, eVar.f3416e);
                    } catch (RuntimeException e9) {
                        AtomicReference atomicReference = fVar.f3421d;
                        while (!atomicReference.compareAndSet(null, e9) && atomicReference.get() == null) {
                        }
                    }
                    r4 = eVar;
                } else if (i5 == 1) {
                    e eVar2 = (e) message.obj;
                    int i6 = eVar2.a;
                    MediaCodec.CryptoInfo cryptoInfo = eVar2.f3414c;
                    long j = eVar2.f3415d;
                    int i10 = eVar2.f3416e;
                    try {
                        synchronized (f.f3418h) {
                            fVar.a.queueSecureInputBuffer(i6, 0, cryptoInfo, j, i10);
                        }
                    } catch (RuntimeException e10) {
                        AtomicReference atomicReference2 = fVar.f3421d;
                        while (!atomicReference2.compareAndSet(null, e10) && atomicReference2.get() == null) {
                        }
                    }
                    r4 = eVar2;
                } else if (i5 != 2) {
                    AtomicReference atomicReference3 = fVar.f3421d;
                    IllegalStateException illegalStateException = new IllegalStateException(String.valueOf(message.what));
                    while (!atomicReference3.compareAndSet(null, illegalStateException) && atomicReference3.get() == null) {
                    }
                } else {
                    fVar.f3422e.q();
                }
                if (r4 != null) {
                    ArrayDeque arrayDeque = f.f3417g;
                    synchronized (arrayDeque) {
                        arrayDeque.add(r4);
                    }
                    return;
                }
                return;
            case 1:
                e5.i iVar = (e5.i) this.f3412b;
                if (message.what == 1 && (simpleExoPlayer = iVar.F) != null && simpleExoPlayer.w() == 3 && iVar.F.g()) {
                    long S = iVar.F.S();
                    long duration = (iVar.F.getDuration() * iVar.F.U()) / 100;
                    e5.j jVar = iVar.f8022d;
                    double d6 = S;
                    double d7 = duration;
                    double duration2 = iVar.F.getDuration();
                    Timeline.Window window = new Timeline.Window();
                    if (!iVar.F.J().p()) {
                        iVar.F.J().n(iVar.F.D(), window);
                    }
                    double d8 = window.f5297x + S;
                    jVar.getClass();
                    WritableMap createMap = Arguments.createMap();
                    createMap.putDouble("currentTime", d6 / 1000.0d);
                    createMap.putDouble("playableDuration", d7 / 1000.0d);
                    createMap.putDouble("seekableDuration", duration2 / 1000.0d);
                    createMap.putDouble("currentPlaybackTime", d8);
                    jVar.c("onVideoProgress", createMap);
                    sendMessageDelayed(obtainMessage(1), Math.round(iVar.f8035o0));
                    return;
                }
                return;
            case 2:
                int i11 = message.what;
                if (i11 == -3 || i11 == -2 || i11 == -1) {
                    ((DialogInterface.OnClickListener) message.obj).onClick((DialogInterface) ((WeakReference) this.f3412b).get(), message.what);
                    return;
                } else {
                    if (i11 != 1) {
                        return;
                    }
                    ((DialogInterface) message.obj).dismiss();
                    return;
                }
            case 3:
                Pair pair = (Pair) message.obj;
                Object obj = pair.first;
                Object obj2 = pair.second;
                int i12 = message.what;
                if (i12 == 0) {
                    nc.c cVar = (nc.c) this.f3412b;
                    e4.r rVar = cVar.f14978c;
                    if (obj == cVar.f14997x) {
                        if (cVar.f14988o == 2 || cVar.h()) {
                            cVar.f14997x = null;
                            if (obj2 instanceof Exception) {
                                rVar.s((Exception) obj2, false);
                                return;
                            }
                            try {
                                cVar.f14977b.u((byte[]) obj2);
                                rVar.f8001i = null;
                                HashSet hashSet = (HashSet) rVar.f8000e;
                                e0 k = e0.k(hashSet);
                                hashSet.clear();
                                c0 listIterator = k.listIterator(0);
                                while (listIterator.hasNext()) {
                                    nc.c cVar2 = (nc.c) listIterator.next();
                                    if (cVar2.k()) {
                                        cVar2.g(true);
                                    }
                                }
                                return;
                            } catch (Exception e11) {
                                rVar.s(e11, true);
                                return;
                            }
                        }
                        return;
                    }
                    return;
                }
                if (i12 != 1) {
                    return;
                }
                nc.c cVar3 = (nc.c) this.f3412b;
                if (obj == cVar3.f14996w && cVar3.h()) {
                    cVar3.f14996w = null;
                    if (obj2 instanceof Exception) {
                        cVar3.j((Exception) obj2, false);
                        return;
                    }
                    try {
                        byte[] s2 = cVar3.f14977b.s(cVar3.f14994u, (byte[]) obj2);
                        if (cVar3.f14995v != null && s2 != null && s2.length != 0) {
                            cVar3.f14995v = s2;
                        }
                        cVar3.f14988o = 4;
                        ke.d dVar = cVar3.f14983h;
                        synchronized (dVar.f13290d) {
                            set = dVar.f13292i;
                        }
                        Iterator it = set.iterator();
                        while (it.hasNext()) {
                            ((nc.n) it.next()).a();
                        }
                        return;
                    } catch (Exception e12) {
                        cVar3.j(e12, true);
                        return;
                    }
                }
                return;
            case 4:
                byte[] bArr = (byte[]) message.obj;
                if (bArr == null) {
                    return;
                }
                Iterator it2 = ((nc.f) this.f3412b).f15018m.iterator();
                while (it2.hasNext()) {
                    nc.c cVar4 = (nc.c) it2.next();
                    cVar4.m();
                    if (Arrays.equals(cVar4.f14994u, bArr)) {
                        if (message.what == 2 && cVar4.f14988o == 4) {
                            int i13 = d0.a;
                            cVar4.g(false);
                            return;
                        }
                        return;
                    }
                }
                return;
            default:
                Transcoder$convertCompress$3$2 transcoder$convertCompress$3$2 = (Transcoder$convertCompress$3$2) this.f3412b;
                Object obj3 = message.obj;
                r4 = obj3 != null ? (List) obj3 : null;
                Bundle data = message.getData();
                String string = data.getString("jobId");
                if (string == null) {
                    throw new IllegalArgumentException("Handler message doesn't contain an id!");
                }
                int i14 = message.what;
                if (i14 == 0) {
                    transcoder$convertCompress$3$2.onStarted(string);
                    return;
                }
                if (i14 == 1) {
                    transcoder$convertCompress$3$2.onCompleted(string, r4);
                    return;
                }
                if (i14 == 2) {
                    transcoder$convertCompress$3$2.onError(string, (Throwable) data.getSerializable("throwable"), r4);
                    return;
                }
                if (i14 == 3) {
                    transcoder$convertCompress$3$2.onProgress(string, data.getFloat(ReactProgressBarViewManager.PROP_PROGRESS));
                    return;
                } else {
                    if (i14 == 4) {
                        transcoder$convertCompress$3$2.onCancelled(string, r4);
                        return;
                    }
                    Log.e("r", "Unknown event received: " + message.what);
                    return;
                }
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ d(Object obj, Looper looper, int i5) {
        super(looper);
        this.a = i5;
        this.f3412b = obj;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(Looper looper, Transcoder$convertCompress$3$2 transcoder$convertCompress$3$2) {
        super(looper);
        this.a = 5;
        this.f3412b = transcoder$convertCompress$3$2;
    }

    public d(e5.i iVar) {
        this.a = 1;
        this.f3412b = iVar;
    }
}

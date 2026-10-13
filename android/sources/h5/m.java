package h5;

import android.media.MediaCodec;
import android.net.Uri;
import android.os.Process;
import android.util.Log;
import com.google.zxing.Result;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.nio.ByteBuffer;
import java.util.HashMap;
import java.util.concurrent.LinkedBlockingQueue;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class m extends Thread {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9540d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f9541e;

    public /* synthetic */ m(int i5, Object obj) {
        this.f9540d = i5;
        this.f9541e = obj;
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        l lVar;
        k kVar;
        ByteBuffer byteBuffer;
        boolean z5;
        switch (this.f9540d) {
            case 0:
                Process.setThreadPriority(10);
                while (true) {
                    n.a((n) this.f9541e, 2);
                    while (true) {
                        try {
                            synchronized (((n) this.f9541e).f9545e) {
                                lVar = ((n) this.f9541e).f9547g;
                                if (lVar != null) {
                                    ((n) this.f9541e).f9547g = null;
                                } else {
                                    try {
                                        ((n) this.f9541e).f9545e.wait();
                                        break;
                                    } catch (InterruptedException unused) {
                                        n.a((n) this.f9541e, 5);
                                        return;
                                    }
                                }
                            }
                            n.a((n) this.f9541e, 3);
                            Result a = lVar.a(((n) this.f9541e).a);
                            if (a != null) {
                                ((n) this.f9541e).f9547g = null;
                                if (n.a((n) this.f9541e, 4) && (kVar = ((n) this.f9541e).f9546f) != null) {
                                    kVar.onDecoded(a);
                                }
                            }
                        } catch (jj.j unused2) {
                        }
                    }
                }
                break;
            case 1:
                ((Function0) this.f9541e).invoke();
                return;
            case 2:
                do {
                    try {
                    } catch (InterruptedException e9) {
                        throw new IllegalStateException(e9);
                    }
                } while (((wd.d) this.f9541e).g());
                return;
            case 3:
                HashMap hashMap = (HashMap) this.f9541e;
                Uri.Builder buildUpon = Uri.parse("https://pagead2.googlesyndication.com/pagead/gen_204?id=gmob-apps").buildUpon();
                for (String str : hashMap.keySet()) {
                    buildUpon.appendQueryParameter(str, (String) hashMap.get(str));
                }
                String uri = buildUpon.build().toString();
                try {
                    HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(uri).openConnection();
                    try {
                        int responseCode = httpURLConnection.getResponseCode();
                        if (responseCode < 200 || responseCode >= 300) {
                            StringBuilder sb2 = new StringBuilder(String.valueOf(uri).length() + 65);
                            sb2.append("Received non-success response code ");
                            sb2.append(responseCode);
                            sb2.append(" from pinging URL: ");
                            sb2.append(uri);
                            Log.w("HttpUrlPinger", sb2.toString());
                        }
                        httpURLConnection.disconnect();
                        return;
                    } catch (Throwable th2) {
                        httpURLConnection.disconnect();
                        throw th2;
                    }
                } catch (IOException e10) {
                    e = e10;
                    String message = e.getMessage();
                    StringBuilder sb3 = new StringBuilder(String.valueOf(message).length() + String.valueOf(uri).length() + 27);
                    sb3.append("Error while pinging URL: ");
                    sb3.append(uri);
                    sb3.append(". ");
                    sb3.append(message);
                    Log.w("HttpUrlPinger", sb3.toString(), e);
                    return;
                } catch (IndexOutOfBoundsException e11) {
                    String message2 = e11.getMessage();
                    StringBuilder sb4 = new StringBuilder(String.valueOf(message2).length() + String.valueOf(uri).length() + 32);
                    sb4.append("Error while parsing ping URL: ");
                    sb4.append(uri);
                    sb4.append(". ");
                    sb4.append(message2);
                    Log.w("HttpUrlPinger", sb4.toString(), e11);
                    return;
                } catch (RuntimeException e12) {
                    e = e12;
                    String message3 = e.getMessage();
                    StringBuilder sb32 = new StringBuilder(String.valueOf(message3).length() + String.valueOf(uri).length() + 27);
                    sb32.append("Error while pinging URL: ");
                    sb32.append(uri);
                    sb32.append(". ");
                    sb32.append(message3);
                    Log.w("HttpUrlPinger", sb32.toString(), e);
                    return;
                } finally {
                }
            default:
                wk.b bVar = (wk.b) this.f9541e;
                while (!bVar.f19864l.get()) {
                    rk.a aVar = (rk.a) bVar.f19865m.peekFirst();
                    if (aVar != null) {
                        int dequeueInputBuffer = bVar.a.f17403b.dequeueInputBuffer(0L);
                        if (dequeueInputBuffer >= 0) {
                            rk.b bVar2 = bVar.a;
                            rk.a aVar2 = null;
                            if (dequeueInputBuffer >= 0) {
                                aVar2 = new rk.a(dequeueInputBuffer, bVar2.f17403b.getInputBuffer(dequeueInputBuffer), null);
                            } else {
                                bVar2.getClass();
                            }
                            if (aVar2 != null) {
                                ByteBuffer byteBuffer2 = aVar2.f17401b;
                                MediaCodec.BufferInfo bufferInfo = aVar2.f17402c;
                                if (byteBuffer2 != null && (byteBuffer = aVar.f17401b) != null) {
                                    bufferInfo.offset = 0;
                                    MediaCodec.BufferInfo bufferInfo2 = aVar.f17402c;
                                    bufferInfo.flags = bufferInfo2.flags;
                                    bufferInfo.presentationTimeUs = bufferInfo2.presentationTimeUs + ((long) ((byteBuffer.position() / (bVar.f19859e * 2)) * bVar.f19857c));
                                    if (byteBuffer2.limit() >= byteBuffer.remaining()) {
                                        bufferInfo.size = byteBuffer.remaining();
                                        z5 = true;
                                    } else {
                                        bufferInfo.size = byteBuffer2.limit();
                                        bufferInfo.flags &= -5;
                                        z5 = false;
                                    }
                                    int i5 = bufferInfo.size;
                                    for (int i6 = 0; i6 < i5; i6++) {
                                        byteBuffer2.put(byteBuffer.get());
                                    }
                                    if (z5) {
                                        bVar.f19865m.removeFirst();
                                        r3.g gVar = bVar.f19863i;
                                        Intrinsics.checkNotNullExpressionValue(byteBuffer, "inputFrame.buffer");
                                        gVar.getClass();
                                        Intrinsics.checkNotNullParameter(byteBuffer, "byteBuffer");
                                        byteBuffer.clear();
                                        ((LinkedBlockingQueue) gVar.f17126e).put(byteBuffer);
                                    }
                                    bVar.a.f17403b.queueInputBuffer(aVar2.a, bufferInfo.offset, bufferInfo.size, bufferInfo.presentationTimeUs, bufferInfo.flags);
                                }
                            }
                        } else if (dequeueInputBuffer != -1) {
                            Log.e("AudioRenderer", "Unhandled value " + dequeueInputBuffer + " when receiving decoded input frame");
                        }
                    }
                }
                bVar.f19865m.clear();
                return;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(wd.d dVar) {
        super("ExoPlayer:SimpleDecoder");
        this.f9540d = 2;
        this.f9541e = dVar;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(n nVar) {
        super("cs-decoder");
        this.f9540d = 0;
        this.f9541e = nVar;
    }
}

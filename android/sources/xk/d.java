package xk;

import android.media.MediaCodec;
import android.media.MediaFormat;
import android.util.Log;
import com.linkedin.android.litr.io.MediaRange;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.LongCompanionObject;
import sk.e;

/* loaded from: classes3.dex */
public final class d extends c {

    /* renamed from: m, reason: collision with root package name */
    public int f20517m;

    /* renamed from: n, reason: collision with root package name */
    public int f20518n;

    /* renamed from: o, reason: collision with root package name */
    public int f20519o;

    /* renamed from: p, reason: collision with root package name */
    public wk.d f20520p;

    /* renamed from: q, reason: collision with root package name */
    public MediaFormat f20521q;

    /* renamed from: r, reason: collision with root package name */
    public MediaFormat f20522r;

    /* renamed from: s, reason: collision with root package name */
    public wk.c f20523s;

    @Override // xk.c
    public final int e() {
        String str;
        int i5;
        int i6;
        String str2;
        boolean z5;
        int i10;
        wk.d dVar = this.f20520p;
        rk.b bVar = this.f20511e;
        boolean z6 = bVar.f17405d;
        MediaCodec.BufferInfo bufferInfo = bVar.f17406e;
        if (!z6) {
            return -3;
        }
        rk.b bVar2 = this.f20510d;
        boolean z7 = bVar2.f17404c;
        MediaCodec.BufferInfo bufferInfo2 = bVar2.f17406e;
        if (!z7) {
            return -3;
        }
        if (this.f20517m == 5) {
            this.f20517m = b();
        }
        int i11 = this.f20517m;
        MediaRange mediaRange = this.f20512f;
        if (i11 != 4 && i11 != 5) {
            vk.a aVar = this.a;
            int sampleTrackIndex = aVar.getSampleTrackIndex();
            if (sampleTrackIndex == this.f20513g || sampleTrackIndex == -1) {
                int dequeueInputBuffer = bVar2.f17403b.dequeueInputBuffer(0L);
                if (dequeueInputBuffer >= 0) {
                    rk.a aVar2 = dequeueInputBuffer >= 0 ? new rk.a(dequeueInputBuffer, bVar2.f17403b.getInputBuffer(dequeueInputBuffer), null) : null;
                    if (aVar2 == null) {
                        throw new e(11, null, null);
                    }
                    int readSampleData = aVar.readSampleData(aVar2.f17401b, 0);
                    long sampleTime = aVar.getSampleTime();
                    int sampleFlags = aVar.getSampleFlags();
                    if (readSampleData < 0 || (sampleFlags & 4) != 0) {
                        aVar2.f17402c.set(0, 0, -1L, 4);
                        bVar2.b(aVar2);
                        Log.d("d", "EoS reached on the input stream");
                        i10 = 4;
                    } else {
                        mediaRange.getClass();
                        if (sampleTime >= LongCompanionObject.MAX_VALUE) {
                            aVar2.f17402c.set(0, 0, -1L, 4);
                            bVar2.b(aVar2);
                            i10 = b();
                            Log.d("d", "Selection end reached on the input stream");
                        } else {
                            aVar2.f17402c.set(0, readSampleData, sampleTime, sampleFlags);
                            bVar2.b(aVar2);
                            aVar.advance();
                        }
                    }
                    this.f20517m = i10;
                } else if (dequeueInputBuffer != -1) {
                    Log.e("d", "Unhandled value " + dequeueInputBuffer + " when decoding an input frame");
                }
            }
            i10 = 2;
            this.f20517m = i10;
        }
        if (this.f20518n != 4) {
            int dequeueOutputBuffer = bVar2.f17403b.dequeueOutputBuffer(bufferInfo2, 0L);
            if (dequeueOutputBuffer >= 0) {
                rk.a aVar3 = dequeueOutputBuffer >= 0 ? new rk.a(dequeueOutputBuffer, bVar2.f17403b.getOutputBuffer(dequeueOutputBuffer), bufferInfo2) : null;
                if (aVar3 == null) {
                    throw new e(11, null, null);
                }
                MediaCodec.BufferInfo bufferInfo3 = aVar3.f17402c;
                if ((bufferInfo3.flags & 4) != 0) {
                    Log.d("d", "EoS on decoder output stream");
                    bVar2.f17403b.releaseOutputBuffer(dequeueOutputBuffer, false);
                    bVar.f17403b.signalEndOfInputStream();
                    str = "Unhandled value ";
                    i6 = 4;
                } else {
                    long j = bufferInfo3.presentationTimeUs;
                    mediaRange.getClass();
                    boolean z8 = j >= 0;
                    bVar2.f17403b.releaseOutputBuffer(dequeueOutputBuffer, z8);
                    wk.c cVar = this.f20523s;
                    if (cVar != null) {
                        str2 = "Unhandled value ";
                        double d6 = cVar.f19868c + cVar.a;
                        cVar.f19868c = d6;
                        int i12 = cVar.f19869d;
                        cVar.f19869d = i12 + 1;
                        if (i12 != 0) {
                            double d7 = cVar.f19867b;
                            if (d6 > d7) {
                                cVar.f19868c = d6 - d7;
                            } else {
                                z5 = false;
                                if (z8 || !z5) {
                                    str = str2;
                                    i6 = 3;
                                } else {
                                    dVar.d(null, TimeUnit.MICROSECONDS.toNanos(bufferInfo3.presentationTimeUs));
                                    i6 = 2;
                                    str = str2;
                                }
                            }
                        }
                    } else {
                        str2 = "Unhandled value ";
                    }
                    z5 = true;
                    if (z8) {
                    }
                    str = str2;
                    i6 = 3;
                }
            } else {
                if (dequeueOutputBuffer == -2) {
                    str = "Unhandled value ";
                    MediaFormat mediaFormat = this.f20521q;
                    MediaFormat outputFormat = bVar2.f17403b.getOutputFormat();
                    c.a(mediaFormat, outputFormat);
                    this.f20521q = outputFormat;
                    dVar.getClass();
                    Log.d("d", "Decoder output format changed: " + this.f20521q);
                } else if (dequeueOutputBuffer != -1) {
                    str = "Unhandled value ";
                    Log.e("d", str + dequeueOutputBuffer + " when receiving decoded input frame");
                } else {
                    str = "Unhandled value ";
                }
                i6 = 2;
            }
            this.f20518n = i6;
        } else {
            str = "Unhandled value ";
        }
        if (this.f20519o != 4) {
            int dequeueOutputBuffer2 = bVar.f17403b.dequeueOutputBuffer(bufferInfo, 0L);
            vk.b bVar3 = this.f20508b;
            if (dequeueOutputBuffer2 >= 0) {
                rk.a aVar4 = dequeueOutputBuffer2 >= 0 ? new rk.a(dequeueOutputBuffer2, bVar.f17403b.getOutputBuffer(dequeueOutputBuffer2), bufferInfo) : null;
                if (aVar4 == null) {
                    throw new e(11, null, null);
                }
                MediaCodec.BufferInfo bufferInfo4 = aVar4.f17402c;
                int i13 = bufferInfo4.flags;
                if ((i13 & 4) != 0) {
                    Log.d("d", "Encoder produced EoS, we are done");
                    this.f20516l = 1.0f;
                    i5 = 4;
                } else {
                    if (bufferInfo4.size > 0 && (i13 & 2) == 0) {
                        bVar3.c(this.f20514h, aVar4.f17401b, bufferInfo4);
                        long j5 = this.k;
                        if (j5 > 0) {
                            this.f20516l = bufferInfo4.presentationTimeUs / j5;
                        }
                    }
                    i5 = 2;
                }
                bVar.f17403b.releaseOutputBuffer(dequeueOutputBuffer2, false);
            } else if (dequeueOutputBuffer2 != -2) {
                if (dequeueOutputBuffer2 != -1) {
                    Log.e("d", str + dequeueOutputBuffer2 + " when receiving encoded output frame");
                }
                i5 = 2;
            } else {
                MediaFormat outputFormat2 = bVar.f17403b.getOutputFormat();
                if (!this.f20515i) {
                    c.a(this.f20521q, outputFormat2);
                    this.j = outputFormat2;
                    this.f20522r = outputFormat2;
                    int i14 = this.f20514h;
                    bVar3.a(outputFormat2, i14);
                    this.f20514h = i14;
                    this.f20515i = true;
                    dVar.getClass();
                }
                Log.d("d", "Encoder output format received " + outputFormat2);
                i5 = 1;
            }
            this.f20519o = i5;
        }
        int i15 = this.f20519o;
        int i16 = i15 == 1 ? 1 : 2;
        int i17 = this.f20517m;
        if ((i17 == 4 || i17 == 5) && this.f20518n == 4 && i15 == 4) {
            return 4;
        }
        if (this.f20518n == 3) {
            return 3;
        }
        return i16;
    }

    @Override // xk.c
    public final void f() {
        this.a.selectTrack(this.f20513g);
        this.f20511e.c();
        this.f20510d.c();
    }

    @Override // xk.c
    public final void g() {
        rk.b bVar = this.f20511e;
        if (bVar.f17405d) {
            bVar.f17403b.stop();
            bVar.f17405d = false;
        }
        if (!bVar.f17404c) {
            bVar.f17403b.release();
            bVar.f17404c = true;
        }
        rk.b bVar2 = this.f20510d;
        if (bVar2.f17404c) {
            bVar2.f17403b.stop();
            bVar2.f17404c = false;
        }
        if (!bVar2.f17405d) {
            bVar2.f17403b.release();
            bVar2.f17405d = true;
        }
        this.f20520p.release();
    }
}

package xk;

import android.media.MediaCodec;
import android.media.MediaFormat;
import android.util.Log;
import com.linkedin.android.litr.io.MediaRange;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.LongCompanionObject;
import sk.e;

/* loaded from: classes3.dex */
public final class a extends c {

    /* renamed from: m, reason: collision with root package name */
    public int f20501m;

    /* renamed from: n, reason: collision with root package name */
    public int f20502n;

    /* renamed from: o, reason: collision with root package name */
    public int f20503o;

    /* renamed from: p, reason: collision with root package name */
    public MediaFormat f20504p;

    @Override // xk.c
    public final int e() {
        int i5;
        int i6;
        int i10;
        rk.b bVar = this.f20511e;
        boolean z5 = bVar.f17405d;
        MediaCodec.BufferInfo bufferInfo = bVar.f17406e;
        if (!z5) {
            return -3;
        }
        rk.b bVar2 = this.f20510d;
        boolean z6 = bVar2.f17404c;
        MediaCodec.BufferInfo bufferInfo2 = bVar2.f17406e;
        if (!z6) {
            return -3;
        }
        if (this.f20501m == 5) {
            this.f20501m = b();
        }
        int i11 = this.f20501m;
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
                        Log.d("a", "EoS reached on the input stream");
                        i10 = 4;
                    } else {
                        mediaRange.getClass();
                        if (sampleTime >= LongCompanionObject.MAX_VALUE) {
                            aVar2.f17402c.set(0, 0, -1L, 4);
                            bVar2.b(aVar2);
                            i10 = b();
                            Log.d("a", "Selection end reached on the input stream");
                        } else {
                            aVar2.f17402c.set(0, readSampleData, sampleTime, sampleFlags);
                            bVar2.b(aVar2);
                            aVar.advance();
                        }
                    }
                    this.f20501m = i10;
                } else if (dequeueInputBuffer != -1) {
                    Log.e("a", "Unhandled value " + dequeueInputBuffer + " when decoding an input frame");
                }
            }
            i10 = 2;
            this.f20501m = i10;
        }
        int i12 = this.f20502n;
        wk.e eVar = this.f20509c;
        if (i12 != 4) {
            int dequeueOutputBuffer = bVar2.f17403b.dequeueOutputBuffer(bufferInfo2, 0L);
            if (dequeueOutputBuffer >= 0) {
                rk.a aVar3 = dequeueOutputBuffer >= 0 ? new rk.a(dequeueOutputBuffer, bVar2.f17403b.getOutputBuffer(dequeueOutputBuffer), bufferInfo2) : null;
                if (aVar3 == null) {
                    throw new e(11, null, null);
                }
                MediaCodec.BufferInfo bufferInfo3 = aVar3.f17402c;
                long j = bufferInfo3.presentationTimeUs;
                mediaRange.getClass();
                if (j >= 0 || (bufferInfo3.flags & 4) != 0) {
                    bufferInfo3.presentationTimeUs = j;
                    eVar.d(aVar3, TimeUnit.MICROSECONDS.toNanos(j));
                }
                bVar2.f17403b.releaseOutputBuffer(dequeueOutputBuffer, false);
                if ((bufferInfo3.flags & 4) != 0) {
                    Log.d("a", "EoS on decoder output stream");
                    i6 = 4;
                    this.f20502n = i6;
                }
            } else if (dequeueOutputBuffer == -2) {
                MediaFormat outputFormat = bVar2.f17403b.getOutputFormat();
                this.f20504p = outputFormat;
                eVar.c(outputFormat, this.j);
                Log.d("a", "Decoder output format changed: " + this.f20504p);
            } else if (dequeueOutputBuffer != -1) {
                Log.e("a", "Unhandled value " + dequeueOutputBuffer + " when receiving decoded input frame");
            }
            i6 = 2;
            this.f20502n = i6;
        }
        if (this.f20503o != 4) {
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
                    Log.d("a", "Encoder produced EoS, we are done");
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
                    Log.e("a", "Unhandled value " + dequeueOutputBuffer2 + " when receiving encoded output frame");
                }
                i5 = 2;
            } else {
                MediaFormat outputFormat2 = bVar.f17403b.getOutputFormat();
                if (!this.f20515i) {
                    c.a(this.f20504p, outputFormat2);
                    this.j = outputFormat2;
                    int i14 = this.f20514h;
                    bVar3.a(outputFormat2, i14);
                    this.f20514h = i14;
                    this.f20515i = true;
                    eVar.c(this.f20504p, this.j);
                }
                Log.d("a", "Encoder output format received " + outputFormat2);
                i5 = 1;
            }
            this.f20503o = i5;
        }
        int i15 = this.f20503o;
        int i16 = i15 == 1 ? 1 : 2;
        int i17 = this.f20501m;
        if ((i17 == 4 || i17 == 5) && this.f20502n == 4 && i15 == 4) {
            return 4;
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
        this.f20509c.release();
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
        if (bVar2.f17405d) {
            return;
        }
        bVar2.f17403b.release();
        bVar2.f17405d = true;
    }
}

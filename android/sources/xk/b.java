package xk;

import android.media.MediaCodec;
import android.media.MediaFormat;
import android.util.Log;
import com.discord.key_commands.KeyCommandDescriptor;
import java.nio.ByteBuffer;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public final class b extends c {

    /* renamed from: m, reason: collision with root package name */
    public ByteBuffer f20505m;

    /* renamed from: n, reason: collision with root package name */
    public MediaCodec.BufferInfo f20506n;

    /* renamed from: o, reason: collision with root package name */
    public int f20507o;

    public b(vk.a aVar, int i5, vk.b bVar, int i6) {
        super(i5, i6, null, null, null, aVar, bVar, null);
    }

    @Override // xk.c
    public final int e() {
        int i5 = this.f20507o;
        if (i5 == 4) {
            return i5;
        }
        if (i5 == 5) {
            this.f20507o = b();
            return 4;
        }
        boolean z5 = this.f20515i;
        long j = this.k;
        int i6 = this.f20513g;
        vk.b bVar = this.f20508b;
        vk.a aVar = this.a;
        if (!z5) {
            MediaFormat trackFormat = aVar.getTrackFormat(i6);
            this.j = trackFormat;
            if (j > 0) {
                trackFormat.setLong("durationUs", j);
            }
            MediaFormat mediaFormat = this.j;
            int i10 = this.f20514h;
            bVar.a(mediaFormat, i10);
            this.f20514h = i10;
            this.f20515i = true;
            this.f20505m = ByteBuffer.allocate(this.j.containsKey("max-input-size") ? this.j.getInteger("max-input-size") : KeyCommandDescriptor.ModifierFlags.COMMAND);
            this.f20507o = 1;
            return 1;
        }
        int sampleTrackIndex = aVar.getSampleTrackIndex();
        if (sampleTrackIndex != -1 && sampleTrackIndex != i6) {
            this.f20507o = 2;
            return 2;
        }
        this.f20507o = 2;
        int readSampleData = aVar.readSampleData(this.f20505m, 0);
        long sampleTime = aVar.getSampleTime();
        int sampleFlags = aVar.getSampleFlags();
        if (readSampleData < 0 || (sampleFlags & 4) != 0) {
            this.f20505m.clear();
            this.f20516l = 1.0f;
            this.f20507o = 4;
            Log.d("b", "Reach EoS on input stream");
        } else {
            this.f20512f.getClass();
            if (sampleTime >= LongCompanionObject.MAX_VALUE) {
                this.f20505m.clear();
                this.f20516l = 1.0f;
                MediaCodec.BufferInfo bufferInfo = this.f20506n;
                bufferInfo.set(0, 0, sampleTime, bufferInfo.flags | 4);
                bVar.c(this.f20514h, this.f20505m, this.f20506n);
                this.f20507o = b();
                Log.d("b", "Reach selection end on input stream");
            } else {
                if (sampleTime >= 0) {
                    int i11 = (sampleFlags & 1) != 0 ? 1 : 0;
                    if (j > 0) {
                        this.f20516l = sampleTime / j;
                    }
                    this.f20506n.set(0, readSampleData, sampleTime, i11);
                    bVar.c(this.f20514h, this.f20505m, this.f20506n);
                }
                aVar.advance();
            }
        }
        return this.f20507o;
    }

    @Override // xk.c
    public final void f() {
        this.a.selectTrack(this.f20513g);
        this.f20506n = new MediaCodec.BufferInfo();
    }

    @Override // xk.c
    public final void g() {
        ByteBuffer byteBuffer = this.f20505m;
        if (byteBuffer != null) {
            byteBuffer.clear();
            this.f20505m = null;
        }
    }

    @Override // xk.c
    public final void c() {
    }

    @Override // xk.c
    public final void d() {
    }
}

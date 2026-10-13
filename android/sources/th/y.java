package th;

/* loaded from: classes3.dex */
public final class y {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final String f18624b;

    /* renamed from: c, reason: collision with root package name */
    public final long f18625c;

    /* renamed from: d, reason: collision with root package name */
    public final long f18626d;

    /* renamed from: e, reason: collision with root package name */
    public final int f18627e;

    public y(long j, long j5, String str, int i5, int i6) {
        this.a = i5;
        this.f18624b = str;
        this.f18625c = j;
        this.f18626d = j5;
        this.f18627e = i6;
    }

    public final boolean equals(Object obj) {
        String str;
        if (obj == this) {
            return true;
        }
        if (obj instanceof y) {
            y yVar = (y) obj;
            String str2 = yVar.f18624b;
            if (this.a == yVar.a && ((str = this.f18624b) != null ? str.equals(str2) : str2 == null) && this.f18625c == yVar.f18625c && this.f18626d == yVar.f18626d && this.f18627e == yVar.f18627e) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.f18624b;
        int hashCode = str == null ? 0 : str.hashCode();
        long j = this.f18626d;
        long j5 = j ^ (j >>> 32);
        long j7 = this.f18625c;
        return ((((((hashCode ^ ((this.a ^ 1000003) * 1000003)) * 1000003) ^ ((int) ((j7 >>> 32) ^ j7))) * 1000003) ^ ((int) j5)) * 1000003) ^ this.f18627e;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("SliceCheckpoint{fileExtractionStatus=");
        sb2.append(this.a);
        sb2.append(", filePath=");
        sb2.append(this.f18624b);
        sb2.append(", fileOffset=");
        sb2.append(this.f18625c);
        sb2.append(", remainingBytes=");
        sb2.append(this.f18626d);
        sb2.append(", previousChunk=");
        return k0.d.m(sb2, this.f18627e, "}");
    }
}

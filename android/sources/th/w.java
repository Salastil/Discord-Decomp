package th;

import com.google.android.play.core.assetpacks.AssetPackState;

/* loaded from: classes3.dex */
public final class w extends AssetPackState {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f18604b;

    /* renamed from: c, reason: collision with root package name */
    public final int f18605c;

    /* renamed from: d, reason: collision with root package name */
    public final long f18606d;

    /* renamed from: e, reason: collision with root package name */
    public final long f18607e;

    /* renamed from: f, reason: collision with root package name */
    public final int f18608f;

    /* renamed from: g, reason: collision with root package name */
    public final int f18609g;

    /* renamed from: h, reason: collision with root package name */
    public final String f18610h;

    /* renamed from: i, reason: collision with root package name */
    public final String f18611i;

    public w(String str, int i5, int i6, long j, long j5, int i10, int i11, String str2, String str3) {
        if (str == null) {
            throw new NullPointerException("Null name");
        }
        this.a = str;
        this.f18604b = i5;
        this.f18605c = i6;
        this.f18606d = j;
        this.f18607e = j5;
        this.f18608f = i10;
        this.f18609g = i11;
        if (str2 == null) {
            throw new NullPointerException("Null availableVersionTag");
        }
        this.f18610h = str2;
        if (str3 == null) {
            throw new NullPointerException("Null installedVersionTag");
        }
        this.f18611i = str3;
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackState
    public final String b() {
        return this.f18610h;
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackState
    public final long c() {
        return this.f18606d;
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackState
    public final int e() {
        return this.f18605c;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof AssetPackState)) {
            return false;
        }
        AssetPackState assetPackState = (AssetPackState) obj;
        return this.a.equals(assetPackState.g()) && this.f18604b == assetPackState.h() && this.f18605c == assetPackState.e() && this.f18606d == assetPackState.c() && this.f18607e == assetPackState.i() && this.f18608f == assetPackState.j() && this.f18609g == assetPackState.k() && this.f18610h.equals(assetPackState.b()) && this.f18611i.equals(assetPackState.f());
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackState
    public final String f() {
        return this.f18611i;
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackState
    public final String g() {
        return this.a;
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackState
    public final int h() {
        return this.f18604b;
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() ^ 1000003;
        long j = this.f18607e;
        long j5 = j ^ (j >>> 32);
        long j7 = this.f18606d;
        return (((((((((((((((hashCode * 1000003) ^ this.f18604b) * 1000003) ^ this.f18605c) * 1000003) ^ ((int) ((j7 >>> 32) ^ j7))) * 1000003) ^ ((int) j5)) * 1000003) ^ this.f18608f) * 1000003) ^ this.f18609g) * 1000003) ^ this.f18610h.hashCode()) * 1000003) ^ this.f18611i.hashCode();
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackState
    public final long i() {
        return this.f18607e;
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackState
    public final int j() {
        return this.f18608f;
    }

    @Override // com.google.android.play.core.assetpacks.AssetPackState
    public final int k() {
        return this.f18609g;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("AssetPackState{name=");
        sb2.append(this.a);
        sb2.append(", status=");
        sb2.append(this.f18604b);
        sb2.append(", errorCode=");
        sb2.append(this.f18605c);
        sb2.append(", bytesDownloaded=");
        sb2.append(this.f18606d);
        sb2.append(", totalBytesToDownload=");
        sb2.append(this.f18607e);
        sb2.append(", transferProgressPercentage=");
        sb2.append(this.f18608f);
        sb2.append(", updateAvailability=");
        sb2.append(this.f18609g);
        sb2.append(", availableVersionTag=");
        sb2.append(this.f18610h);
        sb2.append(", installedVersionTag=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f18611i, "}");
    }
}

package qh;

import com.google.android.play.agesignals.AgeSignalsResult;
import java.util.Date;

/* loaded from: classes3.dex */
public final class i extends AgeSignalsResult {
    public final Integer a;

    /* renamed from: b, reason: collision with root package name */
    public final Integer f16899b;

    /* renamed from: c, reason: collision with root package name */
    public final Integer f16900c;

    /* renamed from: d, reason: collision with root package name */
    public final Date f16901d;

    /* renamed from: e, reason: collision with root package name */
    public final Integer f16902e;

    /* renamed from: f, reason: collision with root package name */
    public final String f16903f;

    public i(Integer num, Integer num2, Integer num3, Date date, Integer num4, String str) {
        this.a = num;
        this.f16899b = num2;
        this.f16900c = num3;
        this.f16901d = date;
        this.f16902e = num4;
        this.f16903f = str;
    }

    @Override // com.google.android.play.agesignals.AgeSignalsResult
    public final Integer a() {
        return this.f16899b;
    }

    @Override // com.google.android.play.agesignals.AgeSignalsResult
    public final Integer b() {
        return this.a;
    }

    @Override // com.google.android.play.agesignals.AgeSignalsResult
    public final Integer c() {
        return this.f16900c;
    }

    @Override // com.google.android.play.agesignals.AgeSignalsResult
    public final String d() {
        return this.f16903f;
    }

    @Override // com.google.android.play.agesignals.AgeSignalsResult
    public final Date e() {
        return this.f16901d;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof AgeSignalsResult)) {
            return false;
        }
        AgeSignalsResult ageSignalsResult = (AgeSignalsResult) obj;
        Integer num = this.a;
        if (num == null) {
            if (ageSignalsResult.b() != null) {
                return false;
            }
        } else if (!num.equals(ageSignalsResult.b())) {
            return false;
        }
        Integer num2 = this.f16899b;
        if (num2 == null) {
            if (ageSignalsResult.a() != null) {
                return false;
            }
        } else if (!num2.equals(ageSignalsResult.a())) {
            return false;
        }
        Integer num3 = this.f16900c;
        if (num3 == null) {
            if (ageSignalsResult.c() != null) {
                return false;
            }
        } else if (!num3.equals(ageSignalsResult.c())) {
            return false;
        }
        Date date = this.f16901d;
        if (date == null) {
            if (ageSignalsResult.e() != null) {
                return false;
            }
        } else if (!date.equals(ageSignalsResult.e())) {
            return false;
        }
        Integer num4 = this.f16902e;
        if (num4 == null) {
            if (ageSignalsResult.f() != null) {
                return false;
            }
        } else if (!num4.equals(ageSignalsResult.f())) {
            return false;
        }
        String str = this.f16903f;
        return str == null ? ageSignalsResult.d() == null : str.equals(ageSignalsResult.d());
    }

    @Override // com.google.android.play.agesignals.AgeSignalsResult
    public final Integer f() {
        return this.f16902e;
    }

    public final int hashCode() {
        Integer num = this.a;
        int hashCode = num == null ? 0 : num.hashCode();
        Integer num2 = this.f16899b;
        int hashCode2 = num2 == null ? 0 : num2.hashCode();
        int i5 = hashCode ^ 1000003;
        Integer num3 = this.f16900c;
        int hashCode3 = ((((i5 * 1000003) ^ hashCode2) * 1000003) ^ (num3 == null ? 0 : num3.hashCode())) * 1000003;
        Date date = this.f16901d;
        int hashCode4 = (hashCode3 ^ (date == null ? 0 : date.hashCode())) * 1000003;
        Integer num4 = this.f16902e;
        int hashCode5 = (hashCode4 ^ (num4 == null ? 0 : num4.hashCode())) * 1000003;
        String str = this.f16903f;
        return (str != null ? str.hashCode() : 0) ^ hashCode5;
    }

    public final String toString() {
        String valueOf = String.valueOf(this.f16901d);
        StringBuilder sb2 = new StringBuilder("AgeSignalsResult{ageRangeSource=");
        sb2.append(this.a);
        sb2.append(", ageLower=");
        sb2.append(this.f16899b);
        sb2.append(", ageUpper=");
        k0.d.r(this.f16900c, ", significantChangeApprovalDate=", valueOf, ", significantChangeStatus=", sb2);
        sb2.append(this.f16902e);
        sb2.append(", installId=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f16903f, "}");
    }
}

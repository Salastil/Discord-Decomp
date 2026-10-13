package qh;

import com.google.android.play.agesignals.AgeSignalsAccessResult;

/* loaded from: classes3.dex */
public final class h extends AgeSignalsAccessResult {
    public final Integer a;

    public h(Integer num) {
        this.a = num;
    }

    @Override // com.google.android.play.agesignals.AgeSignalsAccessResult
    public final Integer a() {
        return this.a;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof AgeSignalsAccessResult)) {
            return false;
        }
        AgeSignalsAccessResult ageSignalsAccessResult = (AgeSignalsAccessResult) obj;
        Integer num = this.a;
        return num == null ? ageSignalsAccessResult.a() == null : num.equals(ageSignalsAccessResult.a());
    }

    public final int hashCode() {
        Integer num = this.a;
        return (num == null ? 0 : num.hashCode()) ^ 1000003;
    }

    public final String toString() {
        return "AgeSignalsAccessResult{ageSignalsStatus=" + this.a + "}";
    }
}

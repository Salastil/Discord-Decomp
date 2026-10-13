package j$.time.format;

/* loaded from: classes2.dex */
public final class j implements f {

    /* renamed from: c, reason: collision with root package name */
    public static final String[] f12308c = {"+HH", "+HHmm", "+HH:mm", "+HHMM", "+HH:MM", "+HHMMss", "+HH:MM:ss", "+HHMMSS", "+HH:MM:SS"};

    /* renamed from: d, reason: collision with root package name */
    public static final j f12309d = new j("+HH:MM:ss", "Z");
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final int f12310b;

    static {
        new j("+HH:MM:ss", "0");
    }

    public j(String str, String str2) {
        for (int i5 = 0; i5 < 9; i5++) {
            if (f12308c[i5].equals(str)) {
                this.f12310b = i5;
                this.a = str2;
                return;
            }
        }
        throw new IllegalArgumentException("Invalid zone offset pattern: ".concat(str));
    }

    @Override // j$.time.format.f
    public final boolean a(p pVar, StringBuilder sb2) {
        Long a = pVar.a(j$.time.temporal.a.OFFSET_SECONDS);
        if (a == null) {
            return false;
        }
        int intExact = Math.toIntExact(a.longValue());
        String str = this.a;
        if (intExact == 0) {
            sb2.append(str);
            return true;
        }
        int abs = Math.abs((intExact / 3600) % 100);
        int abs2 = Math.abs((intExact / 60) % 60);
        int abs3 = Math.abs(intExact % 60);
        int length = sb2.length();
        sb2.append(intExact < 0 ? "-" : "+");
        sb2.append((char) ((abs / 10) + 48));
        sb2.append((char) ((abs % 10) + 48));
        int i5 = this.f12310b;
        if (i5 >= 3 || (i5 >= 1 && abs2 > 0)) {
            int i6 = i5 % 2;
            sb2.append(i6 == 0 ? ":" : "");
            sb2.append((char) ((abs2 / 10) + 48));
            sb2.append((char) ((abs2 % 10) + 48));
            abs += abs2;
            if (i5 >= 7 || (i5 >= 5 && abs3 > 0)) {
                sb2.append(i6 == 0 ? ":" : "");
                sb2.append((char) ((abs3 / 10) + 48));
                sb2.append((char) ((abs3 % 10) + 48));
                abs += abs3;
            }
        }
        if (abs == 0) {
            sb2.setLength(length);
            sb2.append(str);
        }
        return true;
    }

    public final String toString() {
        return "Offset(" + f12308c[this.f12310b] + ",'" + this.a.replace("'", "''") + "')";
    }
}

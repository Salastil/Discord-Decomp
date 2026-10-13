package ma;

import com.facebook.imagepipeline.image.EncodedImage;
import e4.f;
import java.io.IOException;
import java.io.InputStream;
import o8.h;
import qa.n;
import r8.e;

/* loaded from: classes3.dex */
public final class c {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public int f14418b;

    /* renamed from: c, reason: collision with root package name */
    public int f14419c;

    /* renamed from: d, reason: collision with root package name */
    public int f14420d;

    /* renamed from: e, reason: collision with root package name */
    public int f14421e;

    /* renamed from: f, reason: collision with root package name */
    public int f14422f;

    /* renamed from: g, reason: collision with root package name */
    public boolean f14423g;

    /* renamed from: h, reason: collision with root package name */
    public final n f14424h;

    public c(n nVar) {
        nVar.getClass();
        this.f14424h = nVar;
        this.f14419c = 0;
        this.f14418b = 0;
        this.f14420d = 0;
        this.f14422f = 0;
        this.f14421e = 0;
        this.a = 0;
    }

    public final boolean a(e eVar) {
        int read;
        int i5 = this.f14421e;
        while (this.a != 6 && (read = eVar.read()) != -1) {
            try {
                int i6 = this.f14419c;
                this.f14419c = i6 + 1;
                if (this.f14423g) {
                    this.a = 6;
                    this.f14423g = false;
                    return false;
                }
                int i10 = this.a;
                if (i10 != 0) {
                    if (i10 != 1) {
                        if (i10 != 2) {
                            if (i10 != 3) {
                                if (i10 == 4) {
                                    this.a = 5;
                                } else if (i10 != 5) {
                                    h.e(false);
                                } else {
                                    int i11 = ((this.f14418b << 8) + read) - 2;
                                    f.K(eVar, i11);
                                    this.f14419c += i11;
                                    this.a = 2;
                                }
                            } else if (read == 255) {
                                this.a = 3;
                            } else if (read == 0) {
                                this.a = 2;
                            } else if (read == 217) {
                                this.f14423g = true;
                                int i12 = i6 - 1;
                                int i13 = this.f14420d;
                                if (i13 > 0) {
                                    this.f14422f = i12;
                                }
                                this.f14420d = i13 + 1;
                                this.f14421e = i13;
                                this.a = 2;
                            } else {
                                if (read == 218) {
                                    int i14 = i6 - 1;
                                    int i15 = this.f14420d;
                                    if (i15 > 0) {
                                        this.f14422f = i14;
                                    }
                                    this.f14420d = i15 + 1;
                                    this.f14421e = i15;
                                }
                                if (read != 1 && ((read < 208 || read > 215) && read != 217 && read != 216)) {
                                    this.a = 4;
                                }
                                this.a = 2;
                            }
                        } else if (read == 255) {
                            this.a = 3;
                        }
                    } else if (read == 216) {
                        this.a = 2;
                    } else {
                        this.a = 6;
                    }
                } else if (read == 255) {
                    this.a = 1;
                } else {
                    this.a = 6;
                }
                this.f14418b = read;
            } catch (IOException e9) {
                h.h(e9);
                throw null;
            }
        }
        return (this.a == 6 || this.f14421e == i5) ? false : true;
    }

    public final boolean b(EncodedImage encodedImage) {
        if (this.a == 6 || encodedImage.getSize() <= this.f14419c) {
            return false;
        }
        InputStream inputStreamOrThrow = encodedImage.getInputStreamOrThrow();
        n nVar = this.f14424h;
        e eVar = new e(inputStreamOrThrow, (byte[]) nVar.get(16384), nVar);
        try {
            try {
                f.K(eVar, this.f14419c);
                return a(eVar);
            } catch (IOException e9) {
                h.h(e9);
                throw null;
            }
        } finally {
            o8.a.b(eVar);
        }
    }
}

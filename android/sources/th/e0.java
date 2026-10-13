package th;

import com.google.android.play.core.assetpacks.AssetPackState;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.RandomAccessFile;
import java.io.SequenceInputStream;
import java.util.zip.GZIPInputStream;

/* loaded from: classes3.dex */
public final class e0 {

    /* renamed from: g, reason: collision with root package name */
    public static final a5.m f18438g = new a5.m("ExtractChunkTaskHandler", 3);
    public final byte[] a = new byte[8192];

    /* renamed from: b, reason: collision with root package name */
    public final s f18439b;

    /* renamed from: c, reason: collision with root package name */
    public final p0 f18440c;

    /* renamed from: d, reason: collision with root package name */
    public final g1 f18441d;

    /* renamed from: e, reason: collision with root package name */
    public final uh.f f18442e;

    /* renamed from: f, reason: collision with root package name */
    public final uh.f f18443f;

    public e0(s sVar, uh.f fVar, uh.f fVar2, p0 p0Var, g1 g1Var) {
        this.f18439b = sVar;
        this.f18442e = fVar;
        this.f18443f = fVar2;
        this.f18440c = p0Var;
        this.f18441d = g1Var;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(16:4|5|(1:7)(2:172|173)|8|9|(2:11|(12:13|(2:15|(1:(7:18|19|20|(2:21|(2:23|24)(1:124))|27|(1:29)(1:122)|(1:31)(2:120|121))(2:135|136))(2:137|(10:139|(9:34|(1:36)|37|(4:38|(4:42|(1:44)(1:57)|(3:46|(1:48)(1:55)|(4:50|(1:52)|53|54))|56)|58|(1:60)(1:91))|63|(1:65)|66|(1:68)(1:89)|(2:70|(1:72)(2:73|(1:75)(3:76|(4:78|(1:80)|81|(1:83)(2:85|86))(1:88)|84))))|92|93|(2:114|115)|95|96|97|98|(4:100|383|105|106)(1:111))(2:140|141)))(2:142|(4:144|(4:145|(1:147)|148|(0)(1:157))|152|(1:154))(2:158|159))|32|(0)|92|93|(0)|95|96|97|98|(0)(0))(2:160|161))(1:162)|155|(0)|92|93|(0)|95|96|97|98|(0)(0)) */
    /* JADX WARN: Code restructure failed: missing block: B:113:0x0356, code lost:
    
        th.e0.f18438g.g("Could not close file for chunk %s of slice %s of pack %s.", java.lang.Integer.valueOf(r19.f18425h), r19.f18423f, (java.lang.String) r19.f10877b);
     */
    /* JADX WARN: Removed duplicated region for block: B:100:0x0372  */
    /* JADX WARN: Removed duplicated region for block: B:111:0x03c0 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:114:0x0300 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:34:0x01cd A[Catch: all -> 0x00b3, TryCatch #0 {all -> 0x00b3, blocks: (B:9:0x004d, B:11:0x0053, B:13:0x005f, B:18:0x006a, B:27:0x0094, B:34:0x01cd, B:36:0x01e9, B:38:0x01ec, B:40:0x01f4, B:42:0x01f8, B:46:0x0202, B:50:0x0210, B:52:0x0230, B:54:0x023c, B:55:0x0208, B:56:0x0240, B:58:0x0245, B:60:0x0249, B:63:0x024d, B:65:0x0251, B:66:0x025f, B:70:0x026d, B:72:0x0271, B:73:0x0282, B:75:0x0286, B:76:0x0295, B:78:0x0299, B:80:0x02bb, B:81:0x02be, B:84:0x02ea, B:85:0x02d1, B:86:0x02d8, B:88:0x02d9, B:120:0x00a9, B:121:0x00b2, B:134:0x00bf, B:133:0x00bc, B:135:0x00c0, B:136:0x00da, B:137:0x00db, B:139:0x0119, B:140:0x0125, B:141:0x012e, B:142:0x012f, B:144:0x014b, B:145:0x0159, B:147:0x016c, B:148:0x0171, B:152:0x017b, B:154:0x0185, B:158:0x019b, B:159:0x01a4, B:160:0x01a5, B:161:0x01c7, B:129:0x00b7, B:20:0x0082, B:21:0x0085, B:23:0x008b), top: B:8:0x004d, outer: #4, inners: #5, #7 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(d0 d0Var) {
        boolean z5;
        InputStream inputStream;
        int i5;
        double d6;
        z c6;
        File c8;
        long length;
        int min;
        int max;
        int read;
        s sVar = this.f18439b;
        String str = (String) d0Var.f10877b;
        int i6 = d0Var.f18420c;
        long j = d0Var.f18421d;
        String str2 = d0Var.f18423f;
        n1 n1Var = new n1(sVar, str, i6, j, str2);
        sVar.getClass();
        File file = new File(new File(new File(sVar.c(i6, j, str), "_slices"), "_metadata"), str2);
        if (!file.exists()) {
            file.mkdirs();
        }
        try {
            InputStream inputStream2 = d0Var.f18427l;
            InputStream gZIPInputStream = d0Var.f18424g != 1 ? inputStream2 : new GZIPInputStream(inputStream2, 8192);
            try {
                if (d0Var.f18425h > 0) {
                    y b10 = n1Var.b();
                    int i10 = b10.f18627e;
                    int i11 = d0Var.f18425h;
                    if (i10 != i11 - 1) {
                        throw new l0("Trying to resume with chunk number " + i11 + " when previously processed chunk was number " + b10.f18627e + ".", d0Var.a);
                    }
                    int i12 = b10.a;
                    if (i12 == 1) {
                        z5 = true;
                        f18438g.a("Resuming zip entry from last chunk during file %s.", b10.f18624b);
                        File file2 = new File(b10.f18624b);
                        if (!file2.exists()) {
                            throw new l0("Partial file specified in checkpoint does not exist. Corrupt directory.", d0Var.a);
                        }
                        RandomAccessFile randomAccessFile = new RandomAccessFile(file2, "rw");
                        randomAccessFile.seek(b10.f18625c);
                        long j5 = b10.f18626d;
                        do {
                            min = (int) Math.min(j5, 8192L);
                            max = Math.max(gZIPInputStream.read(this.a, 0, min), 0);
                            if (max > 0) {
                                randomAccessFile.write(this.a, 0, max);
                            }
                            j5 -= max;
                            if (j5 <= 0) {
                                break;
                            }
                        } while (max > 0);
                        long length2 = randomAccessFile.length();
                        randomAccessFile.close();
                        if (max != min) {
                            f18438g.a("Chunk has ended while resuming the previous chunks file content.", new Object[0]);
                            n1Var.f(length2, j5, file2.getCanonicalPath(), d0Var.f18425h);
                        }
                    } else {
                        if (i12 == 2) {
                            f18438g.a("Resuming zip entry from last chunk during local file header.", new Object[0]);
                            s sVar2 = this.f18439b;
                            String str3 = (String) d0Var.f10877b;
                            int i13 = d0Var.f18420c;
                            long j7 = d0Var.f18421d;
                            String str4 = d0Var.f18423f;
                            sVar2.getClass();
                            z5 = true;
                            File file3 = new File(new File(new File(new File(sVar2.c(i13, j7, str3), "_slices"), "_metadata"), str4), "checkpoint_ext.dat");
                            if (!file3.exists()) {
                                throw new l0("Checkpoint extension file not found.", d0Var.a);
                            }
                            inputStream = new SequenceInputStream(new FileInputStream(file3), gZIPInputStream);
                            if (inputStream != null) {
                                b0 b0Var = new b0(inputStream);
                                File k = this.f18439b.k(d0Var.f18420c, (String) d0Var.f10877b, d0Var.f18421d, d0Var.f18423f);
                                if (!k.exists()) {
                                    k.mkdirs();
                                }
                                do {
                                    c6 = b0Var.c();
                                    if (!c6.f18632d && !b0Var.f18405w) {
                                        if (c6.f18631c == 0 ? z5 : false) {
                                            String str5 = c6.a;
                                            if (!(str5 == null ? false : str5.endsWith("/"))) {
                                                n1Var.i(c6.f18634f);
                                                File file4 = new File(k, c6.a);
                                                file4.getParentFile().mkdirs();
                                                FileOutputStream fileOutputStream = new FileOutputStream(file4);
                                                int read2 = b0Var.read(this.a, 0, 8192);
                                                while (read2 > 0) {
                                                    fileOutputStream.write(this.a, 0, read2);
                                                    read2 = b0Var.read(this.a, 0, 8192);
                                                }
                                                fileOutputStream.close();
                                            }
                                        }
                                        n1Var.j(b0Var, c6.f18634f);
                                    }
                                    if (b0Var.f18404v) {
                                        break;
                                    }
                                } while (!b0Var.f18405w);
                                if (b0Var.f18405w) {
                                    f18438g.a("Writing central directory metadata.", new Object[0]);
                                    n1Var.j(inputStream, c6.f18634f);
                                }
                                if (!(d0Var.f18425h + 1 == d0Var.f18426i ? z5 : false)) {
                                    if (c6.f18632d) {
                                        f18438g.a("Writing slice checkpoint for partial local file header.", new Object[0]);
                                        n1Var.g(c6.f18634f, d0Var.f18425h);
                                    } else if (b0Var.f18405w) {
                                        f18438g.a("Writing slice checkpoint for central directory.", new Object[0]);
                                        n1Var.e(d0Var.f18425h);
                                    } else {
                                        if (c6.f18631c == 0) {
                                            f18438g.a("Writing slice checkpoint for partial file.", new Object[0]);
                                            File k5 = this.f18439b.k(d0Var.f18420c, (String) d0Var.f10877b, d0Var.f18421d, d0Var.f18423f);
                                            if (!k5.exists()) {
                                                k5.mkdirs();
                                            }
                                            c8 = new File(k5, c6.a);
                                            length = c6.f18630b - b0Var.f18403i;
                                            if (c8.length() != length) {
                                                throw new l0("Partial file is of unexpected size.");
                                            }
                                        } else {
                                            f18438g.a("Writing slice checkpoint for partial unextractable file.", new Object[0]);
                                            c8 = n1Var.c();
                                            length = c8.length();
                                        }
                                        n1Var.f(length, b0Var.f18403i, c8.getCanonicalPath(), d0Var.f18425h);
                                    }
                                }
                            }
                            gZIPInputStream.close();
                            i5 = d0Var.f18425h;
                            if (i5 + 1 == d0Var.f18426i) {
                                try {
                                    n1Var.h(i5);
                                } catch (IOException e9) {
                                    f18438g.b("Writing extraction finished checkpoint failed with %s.", e9.getMessage());
                                    throw new l0("Writing extraction finished checkpoint failed.", e9, d0Var.a);
                                }
                            }
                            f18438g.e("Extraction finished for chunk %s of slice %s of pack %s of session %s.", Integer.valueOf(d0Var.f18425h), d0Var.f18423f, (String) d0Var.f10877b, Integer.valueOf(d0Var.a));
                            ((u1) this.f18442e.a()).d(d0Var.a, d0Var.f18425h, (String) d0Var.f10877b, d0Var.f18423f);
                            d0Var.f18427l.close();
                            if (d0Var.k == 3) {
                                r rVar = (r) this.f18443f.a();
                                String str6 = (String) d0Var.f10877b;
                                long j10 = d0Var.j;
                                p0 p0Var = this.f18440c;
                                synchronized (p0Var) {
                                    d6 = (d0Var.f18425h + 1.0d) / d0Var.f18426i;
                                    p0Var.a.put(str6, Double.valueOf(d6));
                                }
                                w a = AssetPackState.a(str6, 3, 0, j10, j10, d6, 1, d0Var.f18422e, this.f18441d.a((String) d0Var.f10877b));
                                rVar.getClass();
                                rVar.f18558b.post(new com.google.android.gms.internal.play_billing.v0(20, rVar, a));
                                return;
                            }
                            return;
                        }
                        if (i12 != 3) {
                            throw new l0("Slice checkpoint file corrupt. Unexpected FileExtractionStatus " + b10.a + ".", d0Var.a);
                        }
                        f18438g.a("Resuming central directory from last chunk.", new Object[0]);
                        long j11 = b10.f18625c;
                        byte[] bArr = n1Var.a;
                        RandomAccessFile randomAccessFile2 = new RandomAccessFile(n1Var.c(), "rw");
                        try {
                            randomAccessFile2.seek(j11);
                            do {
                                read = gZIPInputStream.read(bArr);
                                if (read > 0) {
                                    randomAccessFile2.write(bArr, 0, read);
                                }
                            } while (read >= 0);
                            randomAccessFile2.close();
                            if (!(d0Var.f18425h + 1 == d0Var.f18426i)) {
                                throw new l0("Chunk has ended twice during central directory. This should not be possible with chunk sizes of 50MB.", d0Var.a);
                            }
                            z5 = true;
                        } finally {
                        }
                    }
                    inputStream = null;
                    if (inputStream != null) {
                    }
                    gZIPInputStream.close();
                    i5 = d0Var.f18425h;
                    if (i5 + 1 == d0Var.f18426i) {
                    }
                    f18438g.e("Extraction finished for chunk %s of slice %s of pack %s of session %s.", Integer.valueOf(d0Var.f18425h), d0Var.f18423f, (String) d0Var.f10877b, Integer.valueOf(d0Var.a));
                    ((u1) this.f18442e.a()).d(d0Var.a, d0Var.f18425h, (String) d0Var.f10877b, d0Var.f18423f);
                    d0Var.f18427l.close();
                    if (d0Var.k == 3) {
                    }
                } else {
                    z5 = true;
                }
                inputStream = gZIPInputStream;
                if (inputStream != null) {
                }
                gZIPInputStream.close();
                i5 = d0Var.f18425h;
                if (i5 + 1 == d0Var.f18426i) {
                }
                f18438g.e("Extraction finished for chunk %s of slice %s of pack %s of session %s.", Integer.valueOf(d0Var.f18425h), d0Var.f18423f, (String) d0Var.f10877b, Integer.valueOf(d0Var.a));
                ((u1) this.f18442e.a()).d(d0Var.a, d0Var.f18425h, (String) d0Var.f10877b, d0Var.f18423f);
                d0Var.f18427l.close();
                if (d0Var.k == 3) {
                }
            } finally {
            }
        } catch (IOException e10) {
            f18438g.b("IOException during extraction %s.", e10.getMessage());
            int i14 = d0Var.f18425h;
            String str7 = d0Var.f18423f;
            String str8 = (String) d0Var.f10877b;
            int i15 = d0Var.a;
            StringBuilder n6 = com.discord.chat.bridge.botuikit.a.n("Error extracting chunk ", " of slice ", str7, i14, " of pack ");
            n6.append(str8);
            n6.append(" of session ");
            n6.append(i15);
            n6.append(".");
            throw new l0(n6.toString(), e10, d0Var.a);
        }
    }
}

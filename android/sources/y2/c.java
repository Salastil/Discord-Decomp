package y2;

import android.content.Context;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.AssetManager;
import android.os.Build;
import android.util.Log;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.channels.FileChannel;
import java.nio.channels.FileLock;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.BitSet;
import java.util.Iterator;
import java.util.Map;
import java.util.TreeMap;
import java.util.concurrent.Executor;
import java.util.zip.DataFormatException;
import java.util.zip.Deflater;
import java.util.zip.DeflaterOutputStream;
import java.util.zip.Inflater;
import jc.j;

/* loaded from: classes.dex */
public abstract class c {
    public static final wi.d a = new wi.d(21);

    /* renamed from: b, reason: collision with root package name */
    public static final byte[] f20609b = {112, 114, 111, 0};

    /* renamed from: c, reason: collision with root package name */
    public static final byte[] f20610c = {112, 114, 109, 0};

    /* renamed from: d, reason: collision with root package name */
    public static final byte[] f20611d = {48, 49, 53, 0};

    /* renamed from: e, reason: collision with root package name */
    public static final byte[] f20612e = {48, 49, 48, 0};

    /* renamed from: f, reason: collision with root package name */
    public static final byte[] f20613f = {48, 48, 57, 0};

    /* renamed from: g, reason: collision with root package name */
    public static final byte[] f20614g = {48, 48, 53, 0};

    /* renamed from: h, reason: collision with root package name */
    public static final byte[] f20615h = {48, 48, 49, 0};

    /* renamed from: i, reason: collision with root package name */
    public static final byte[] f20616i = {48, 48, 49, 0};
    public static final byte[] j = {48, 48, 50, 0};

    public static byte[] a(byte[] bArr) {
        Deflater deflater = new Deflater(1);
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            DeflaterOutputStream deflaterOutputStream = new DeflaterOutputStream(byteArrayOutputStream, deflater);
            try {
                deflaterOutputStream.write(bArr);
                deflaterOutputStream.close();
                deflater.end();
                return byteArrayOutputStream.toByteArray();
            } finally {
            }
        } catch (Throwable th2) {
            deflater.end();
            throw th2;
        }
    }

    public static byte[] b(a[] aVarArr, byte[] bArr) {
        int i5 = 0;
        int i6 = 0;
        for (a aVar : aVarArr) {
            i6 += ((((aVar.f20606g * 2) + 7) & (-8)) / 8) + (aVar.f20604e * 2) + d(aVar.a, aVar.f20601b, bArr).getBytes(StandardCharsets.UTF_8).length + 16 + aVar.f20605f;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream(i6);
        if (Arrays.equals(bArr, f20613f)) {
            int length = aVarArr.length;
            while (i5 < length) {
                a aVar2 = aVarArr[i5];
                q(byteArrayOutputStream, aVar2, d(aVar2.a, aVar2.f20601b, bArr));
                p(byteArrayOutputStream, aVar2);
                i5++;
            }
        } else {
            for (a aVar3 : aVarArr) {
                q(byteArrayOutputStream, aVar3, d(aVar3.a, aVar3.f20601b, bArr));
            }
            int length2 = aVarArr.length;
            while (i5 < length2) {
                p(byteArrayOutputStream, aVarArr[i5]);
                i5++;
            }
        }
        if (byteArrayOutputStream.size() == i6) {
            return byteArrayOutputStream.toByteArray();
        }
        throw new IllegalStateException("The bytes saved do not match expectation. actual=" + byteArrayOutputStream.size() + " expected=" + i6);
    }

    public static boolean c(File file) {
        if (!file.isDirectory()) {
            file.delete();
            return true;
        }
        File[] listFiles = file.listFiles();
        if (listFiles == null) {
            return false;
        }
        boolean z5 = true;
        for (File file2 : listFiles) {
            z5 = c(file2) && z5;
        }
        return z5;
    }

    public static String d(String str, String str2, byte[] bArr) {
        byte[] bArr2 = f20615h;
        boolean equals = Arrays.equals(bArr, bArr2);
        byte[] bArr3 = f20614g;
        String str3 = (equals || Arrays.equals(bArr, bArr3)) ? ":" : "!";
        if (str.length() <= 0) {
            if ("!".equals(str3)) {
                return str2.replace(":", "!");
            }
            if (":".equals(str3)) {
                return str2.replace("!", ":");
            }
        } else {
            if (str2.equals("classes.dex")) {
                return str;
            }
            if (str2.contains("!") || str2.contains(":")) {
                if ("!".equals(str3)) {
                    return str2.replace(":", "!");
                }
                if (":".equals(str3)) {
                    return str2.replace("!", ":");
                }
            } else if (!str2.endsWith(".apk")) {
                return com.discord.chat.bridge.botuikit.a.j(k0.d.o(str), (Arrays.equals(bArr, bArr2) || Arrays.equals(bArr, bArr3)) ? ":" : "!", str2);
            }
        }
        return str2;
    }

    public static void e(PackageInfo packageInfo, File file) {
        try {
            DataOutputStream dataOutputStream = new DataOutputStream(new FileOutputStream(new File(file, "profileinstaller_profileWrittenFor_lastUpdateTime.dat")));
            try {
                dataOutputStream.writeLong(packageInfo.lastUpdateTime);
                dataOutputStream.close();
            } finally {
            }
        } catch (IOException unused) {
        }
    }

    public static byte[] f(InputStream inputStream, int i5) {
        byte[] bArr = new byte[i5];
        int i6 = 0;
        while (i6 < i5) {
            int read = inputStream.read(bArr, i6, i5 - i6);
            if (read < 0) {
                throw new IllegalStateException(k0.d.i(i5, "Not enough bytes to read: "));
            }
            i6 += read;
        }
        return bArr;
    }

    public static int[] g(ByteArrayInputStream byteArrayInputStream, int i5) {
        int[] iArr = new int[i5];
        int i6 = 0;
        for (int i10 = 0; i10 < i5; i10++) {
            i6 += (int) m(byteArrayInputStream, 2);
            iArr[i10] = i6;
        }
        return iArr;
    }

    /* JADX WARN: Code restructure failed: missing block: B:27:0x005d, code lost:
    
        if (r0.finished() == false) goto L27;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x0062, code lost:
    
        return r1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x006a, code lost:
    
        throw new java.lang.IllegalStateException("Inflater did not finish");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static byte[] h(FileInputStream fileInputStream, int i5, int i6) {
        Inflater inflater = new Inflater();
        try {
            byte[] bArr = new byte[i6];
            byte[] bArr2 = new byte[RecyclerView.ItemAnimator.FLAG_MOVED];
            int i10 = 0;
            int i11 = 0;
            while (!inflater.finished() && !inflater.needsDictionary() && i10 < i5) {
                int read = fileInputStream.read(bArr2);
                if (read < 0) {
                    throw new IllegalStateException("Invalid zip data. Stream ended after $totalBytesRead bytes. Expected " + i5 + " bytes");
                }
                inflater.setInput(bArr2, 0, read);
                try {
                    i11 += inflater.inflate(bArr, i11, i6 - i11);
                    i10 += read;
                } catch (DataFormatException e9) {
                    throw new IllegalStateException(e9.getMessage());
                }
            }
            throw new IllegalStateException("Didn't read enough bytes during decompression. expected=" + i5 + " actual=" + i10);
        } finally {
            inflater.end();
        }
    }

    public static a[] i(FileInputStream fileInputStream, byte[] bArr, byte[] bArr2, a[] aVarArr) {
        byte[] bArr3 = f20616i;
        if (!Arrays.equals(bArr, bArr3)) {
            if (!Arrays.equals(bArr, j)) {
                throw new IllegalStateException("Unsupported meta version");
            }
            int m5 = (int) m(fileInputStream, 2);
            byte[] h6 = h(fileInputStream, (int) m(fileInputStream, 4), (int) m(fileInputStream, 4));
            if (fileInputStream.read() > 0) {
                throw new IllegalStateException("Content found after the end of file");
            }
            ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(h6);
            try {
                a[] k = k(byteArrayInputStream, bArr2, m5, aVarArr);
                byteArrayInputStream.close();
                return k;
            } catch (Throwable th2) {
                try {
                    byteArrayInputStream.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        }
        if (Arrays.equals(f20611d, bArr2)) {
            throw new IllegalStateException("Requires new Baseline Profile Metadata. Please rebuild the APK with Android Gradle Plugin 7.2 Canary 7 or higher");
        }
        if (!Arrays.equals(bArr, bArr3)) {
            throw new IllegalStateException("Unsupported meta version");
        }
        int m6 = (int) m(fileInputStream, 1);
        byte[] h7 = h(fileInputStream, (int) m(fileInputStream, 4), (int) m(fileInputStream, 4));
        if (fileInputStream.read() > 0) {
            throw new IllegalStateException("Content found after the end of file");
        }
        ByteArrayInputStream byteArrayInputStream2 = new ByteArrayInputStream(h7);
        try {
            a[] j5 = j(byteArrayInputStream2, m6, aVarArr);
            byteArrayInputStream2.close();
            return j5;
        } catch (Throwable th4) {
            try {
                byteArrayInputStream2.close();
            } catch (Throwable th5) {
                th4.addSuppressed(th5);
            }
            throw th4;
        }
    }

    public static a[] j(ByteArrayInputStream byteArrayInputStream, int i5, a[] aVarArr) {
        if (byteArrayInputStream.available() == 0) {
            return new a[0];
        }
        if (i5 != aVarArr.length) {
            throw new IllegalStateException("Mismatched number of dex files found in metadata");
        }
        String[] strArr = new String[i5];
        int[] iArr = new int[i5];
        for (int i6 = 0; i6 < i5; i6++) {
            int m5 = (int) m(byteArrayInputStream, 2);
            iArr[i6] = (int) m(byteArrayInputStream, 2);
            strArr[i6] = new String(f(byteArrayInputStream, m5), StandardCharsets.UTF_8);
        }
        for (int i10 = 0; i10 < i5; i10++) {
            a aVar = aVarArr[i10];
            if (!aVar.f20601b.equals(strArr[i10])) {
                throw new IllegalStateException("Order of dexfiles in metadata did not match baseline");
            }
            int i11 = iArr[i10];
            aVar.f20604e = i11;
            aVar.f20607h = g(byteArrayInputStream, i11);
        }
        return aVarArr;
    }

    public static a[] k(ByteArrayInputStream byteArrayInputStream, byte[] bArr, int i5, a[] aVarArr) {
        if (byteArrayInputStream.available() == 0) {
            return new a[0];
        }
        if (i5 != aVarArr.length) {
            throw new IllegalStateException("Mismatched number of dex files found in metadata");
        }
        for (int i6 = 0; i6 < i5; i6++) {
            m(byteArrayInputStream, 2);
            String str = new String(f(byteArrayInputStream, (int) m(byteArrayInputStream, 2)), StandardCharsets.UTF_8);
            long m5 = m(byteArrayInputStream, 4);
            int m6 = (int) m(byteArrayInputStream, 2);
            a aVar = null;
            if (aVarArr.length > 0) {
                int indexOf = str.indexOf("!");
                if (indexOf < 0) {
                    indexOf = str.indexOf(":");
                }
                String substring = indexOf > 0 ? str.substring(indexOf + 1) : str;
                int i10 = 0;
                while (true) {
                    if (i10 >= aVarArr.length) {
                        break;
                    }
                    if (aVarArr[i10].f20601b.equals(substring)) {
                        aVar = aVarArr[i10];
                        break;
                    }
                    i10++;
                }
            }
            if (aVar == null) {
                throw new IllegalStateException("Missing profile key: ".concat(str));
            }
            aVar.f20603d = m5;
            int[] g6 = g(byteArrayInputStream, m6);
            if (Arrays.equals(bArr, f20615h)) {
                aVar.f20604e = m6;
                aVar.f20607h = g6;
            }
        }
        return aVarArr;
    }

    public static a[] l(FileInputStream fileInputStream, byte[] bArr, String str) {
        if (!Arrays.equals(bArr, f20612e)) {
            throw new IllegalStateException("Unsupported version");
        }
        int m5 = (int) m(fileInputStream, 1);
        byte[] h6 = h(fileInputStream, (int) m(fileInputStream, 4), (int) m(fileInputStream, 4));
        if (fileInputStream.read() > 0) {
            throw new IllegalStateException("Content found after the end of file");
        }
        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(h6);
        try {
            a[] n6 = n(byteArrayInputStream, str, m5);
            byteArrayInputStream.close();
            return n6;
        } catch (Throwable th2) {
            try {
                byteArrayInputStream.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public static long m(InputStream inputStream, int i5) {
        byte[] f2 = f(inputStream, i5);
        long j5 = 0;
        for (int i6 = 0; i6 < i5; i6++) {
            j5 += (f2[i6] & 255) << (i6 * 8);
        }
        return j5;
    }

    public static a[] n(ByteArrayInputStream byteArrayInputStream, String str, int i5) {
        int i6 = 0;
        if (byteArrayInputStream.available() == 0) {
            return new a[0];
        }
        a[] aVarArr = new a[i5];
        for (int i10 = 0; i10 < i5; i10++) {
            int m5 = (int) m(byteArrayInputStream, 2);
            int m6 = (int) m(byteArrayInputStream, 2);
            aVarArr[i10] = new a(str, new String(f(byteArrayInputStream, m5), StandardCharsets.UTF_8), m(byteArrayInputStream, 4), m6, (int) m(byteArrayInputStream, 4), (int) m(byteArrayInputStream, 4), new int[m6], new TreeMap());
        }
        int i11 = 0;
        while (i11 < i5) {
            a aVar = aVarArr[i11];
            int available = byteArrayInputStream.available();
            int i12 = aVar.f20605f;
            int i13 = aVar.f20606g;
            TreeMap treeMap = aVar.f20608i;
            int i14 = available - i12;
            int i15 = i6;
            while (byteArrayInputStream.available() > i14) {
                i15 += (int) m(byteArrayInputStream, 2);
                treeMap.put(Integer.valueOf(i15), 1);
                int m7 = (int) m(byteArrayInputStream, 2);
                while (m7 > 0) {
                    m(byteArrayInputStream, 2);
                    int m10 = (int) m(byteArrayInputStream, 1);
                    if (m10 != 6 && m10 != 7) {
                        while (m10 > 0) {
                            m(byteArrayInputStream, 1);
                            int i16 = i6;
                            int i17 = i11;
                            for (int m11 = (int) m(byteArrayInputStream, 1); m11 > 0; m11--) {
                                m(byteArrayInputStream, 2);
                            }
                            m10--;
                            i6 = i16;
                            i11 = i17;
                        }
                    }
                    m7--;
                    i6 = i6;
                    i11 = i11;
                }
            }
            int i18 = i6;
            int i19 = i11;
            if (byteArrayInputStream.available() != i14) {
                throw new IllegalStateException("Read too much data during profile line parse");
            }
            aVar.f20607h = g(byteArrayInputStream, aVar.f20604e);
            BitSet valueOf = BitSet.valueOf(f(byteArrayInputStream, (((i13 * 2) + 7) & (-8)) / 8));
            for (int i20 = i18; i20 < i13; i20++) {
                int i21 = valueOf.get(i20) ? 2 : i18;
                if (valueOf.get(i20 + i13)) {
                    i21 |= 4;
                }
                if (i21 != 0) {
                    Integer num = (Integer) treeMap.get(Integer.valueOf(i20));
                    if (num == null) {
                        num = Integer.valueOf(i18);
                    }
                    treeMap.put(Integer.valueOf(i20), Integer.valueOf(i21 | num.intValue()));
                }
            }
            i11 = i19 + 1;
            i6 = i18;
        }
        return aVarArr;
    }

    /* JADX WARN: Finally extract failed */
    public static boolean o(ByteArrayOutputStream byteArrayOutputStream, byte[] bArr, a[] aVarArr) {
        long j5;
        ArrayList arrayList;
        int length;
        byte[] bArr2 = f20611d;
        int i5 = 0;
        if (!Arrays.equals(bArr, bArr2)) {
            byte[] bArr3 = f20612e;
            if (Arrays.equals(bArr, bArr3)) {
                byte[] b10 = b(aVarArr, bArr3);
                u(byteArrayOutputStream, aVarArr.length, 1);
                u(byteArrayOutputStream, b10.length, 4);
                byte[] a10 = a(b10);
                u(byteArrayOutputStream, a10.length, 4);
                byteArrayOutputStream.write(a10);
                return true;
            }
            byte[] bArr4 = f20614g;
            if (Arrays.equals(bArr, bArr4)) {
                u(byteArrayOutputStream, aVarArr.length, 1);
                for (a aVar : aVarArr) {
                    int size = aVar.f20608i.size() * 4;
                    String d6 = d(aVar.a, aVar.f20601b, bArr4);
                    Charset charset = StandardCharsets.UTF_8;
                    v(byteArrayOutputStream, d6.getBytes(charset).length);
                    v(byteArrayOutputStream, aVar.f20607h.length);
                    u(byteArrayOutputStream, size, 4);
                    u(byteArrayOutputStream, aVar.f20602c, 4);
                    byteArrayOutputStream.write(d6.getBytes(charset));
                    Iterator it = aVar.f20608i.keySet().iterator();
                    while (it.hasNext()) {
                        v(byteArrayOutputStream, ((Integer) it.next()).intValue());
                        v(byteArrayOutputStream, 0);
                    }
                    for (int i6 : aVar.f20607h) {
                        v(byteArrayOutputStream, i6);
                    }
                }
                return true;
            }
            byte[] bArr5 = f20613f;
            if (Arrays.equals(bArr, bArr5)) {
                byte[] b11 = b(aVarArr, bArr5);
                u(byteArrayOutputStream, aVarArr.length, 1);
                u(byteArrayOutputStream, b11.length, 4);
                byte[] a11 = a(b11);
                u(byteArrayOutputStream, a11.length, 4);
                byteArrayOutputStream.write(a11);
                return true;
            }
            byte[] bArr6 = f20615h;
            if (!Arrays.equals(bArr, bArr6)) {
                return false;
            }
            v(byteArrayOutputStream, aVarArr.length);
            for (a aVar2 : aVarArr) {
                String str = aVar2.a;
                TreeMap treeMap = aVar2.f20608i;
                String d7 = d(str, aVar2.f20601b, bArr6);
                Charset charset2 = StandardCharsets.UTF_8;
                v(byteArrayOutputStream, d7.getBytes(charset2).length);
                v(byteArrayOutputStream, treeMap.size());
                v(byteArrayOutputStream, aVar2.f20607h.length);
                u(byteArrayOutputStream, aVar2.f20602c, 4);
                byteArrayOutputStream.write(d7.getBytes(charset2));
                Iterator it2 = treeMap.keySet().iterator();
                while (it2.hasNext()) {
                    v(byteArrayOutputStream, ((Integer) it2.next()).intValue());
                }
                for (int i10 : aVar2.f20607h) {
                    v(byteArrayOutputStream, i10);
                }
            }
            return true;
        }
        ArrayList arrayList2 = new ArrayList(3);
        ArrayList arrayList3 = new ArrayList(3);
        ByteArrayOutputStream byteArrayOutputStream2 = new ByteArrayOutputStream();
        try {
            v(byteArrayOutputStream2, aVarArr.length);
            int i11 = 2;
            int i12 = 2;
            for (a aVar3 : aVarArr) {
                u(byteArrayOutputStream2, aVar3.f20602c, 4);
                u(byteArrayOutputStream2, aVar3.f20603d, 4);
                u(byteArrayOutputStream2, aVar3.f20606g, 4);
                String d8 = d(aVar3.a, aVar3.f20601b, bArr2);
                Charset charset3 = StandardCharsets.UTF_8;
                int length2 = d8.getBytes(charset3).length;
                v(byteArrayOutputStream2, length2);
                i12 = i12 + 14 + length2;
                byteArrayOutputStream2.write(d8.getBytes(charset3));
            }
            byte[] byteArray = byteArrayOutputStream2.toByteArray();
            if (i12 != byteArray.length) {
                throw new IllegalStateException("Expected size " + i12 + ", does not match actual size " + byteArray.length);
            }
            i iVar = new i(byteArray, 1, false);
            byteArrayOutputStream2.close();
            arrayList2.add(iVar);
            ByteArrayOutputStream byteArrayOutputStream3 = new ByteArrayOutputStream();
            int i13 = 0;
            int i14 = 0;
            while (i13 < aVarArr.length) {
                try {
                    a aVar4 = aVarArr[i13];
                    v(byteArrayOutputStream3, i13);
                    v(byteArrayOutputStream3, aVar4.f20604e);
                    i14 = i14 + 4 + (aVar4.f20604e * i11);
                    int[] iArr = aVar4.f20607h;
                    int length3 = iArr.length;
                    int i15 = i5;
                    int i16 = i11;
                    int i17 = i15;
                    while (i17 < length3) {
                        int i18 = iArr[i17];
                        v(byteArrayOutputStream3, i18 - i15);
                        i17++;
                        i15 = i18;
                    }
                    i13++;
                    i11 = i16;
                    i5 = 0;
                } catch (Throwable th2) {
                }
            }
            byte[] byteArray2 = byteArrayOutputStream3.toByteArray();
            if (i14 != byteArray2.length) {
                throw new IllegalStateException("Expected size " + i14 + ", does not match actual size " + byteArray2.length);
            }
            i iVar2 = new i(byteArray2, 3, true);
            byteArrayOutputStream3.close();
            arrayList2.add(iVar2);
            byteArrayOutputStream3 = new ByteArrayOutputStream();
            int i19 = 0;
            int i20 = 0;
            while (i19 < aVarArr.length) {
                try {
                    a aVar5 = aVarArr[i19];
                    Iterator it3 = aVar5.f20608i.entrySet().iterator();
                    int i21 = 0;
                    while (it3.hasNext()) {
                        i21 |= ((Integer) ((Map.Entry) it3.next()).getValue()).intValue();
                    }
                    ByteArrayOutputStream byteArrayOutputStream4 = new ByteArrayOutputStream();
                    try {
                        r(byteArrayOutputStream4, i21, aVar5);
                        byte[] byteArray3 = byteArrayOutputStream4.toByteArray();
                        byteArrayOutputStream4.close();
                        byteArrayOutputStream4 = new ByteArrayOutputStream();
                        try {
                            s(byteArrayOutputStream4, aVar5);
                            byte[] byteArray4 = byteArrayOutputStream4.toByteArray();
                            byteArrayOutputStream4.close();
                            v(byteArrayOutputStream3, i19);
                            int length4 = byteArray3.length + 2 + byteArray4.length;
                            int i22 = i20 + 6;
                            ArrayList arrayList4 = arrayList3;
                            u(byteArrayOutputStream3, length4, 4);
                            v(byteArrayOutputStream3, i21);
                            byteArrayOutputStream3.write(byteArray3);
                            byteArrayOutputStream3.write(byteArray4);
                            i20 = i22 + length4;
                            i19++;
                            arrayList3 = arrayList4;
                        } finally {
                        }
                    } finally {
                    }
                } finally {
                    try {
                        byteArrayOutputStream3.close();
                        throw th2;
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                }
            }
            ArrayList arrayList5 = arrayList3;
            byte[] byteArray5 = byteArrayOutputStream3.toByteArray();
            if (i20 != byteArray5.length) {
                throw new IllegalStateException("Expected size " + i20 + ", does not match actual size " + byteArray5.length);
            }
            i iVar3 = new i(byteArray5, 4, true);
            byteArrayOutputStream3.close();
            arrayList2.add(iVar3);
            long j7 = 4;
            long size2 = j7 + j7 + 4 + (arrayList2.size() * 16);
            u(byteArrayOutputStream, arrayList2.size(), 4);
            int i23 = 0;
            while (i23 < arrayList2.size()) {
                i iVar4 = (i) arrayList2.get(i23);
                int i24 = iVar4.a;
                byte[] bArr7 = iVar4.f20622b;
                if (i24 == 1) {
                    j5 = 0;
                } else if (i24 == 2) {
                    j5 = 1;
                } else if (i24 == 3) {
                    j5 = 2;
                } else if (i24 == 4) {
                    j5 = 3;
                } else {
                    if (i24 != 5) {
                        throw null;
                    }
                    j5 = 4;
                }
                u(byteArrayOutputStream, j5, 4);
                u(byteArrayOutputStream, size2, 4);
                if (iVar4.f20623c) {
                    long length5 = bArr7.length;
                    byte[] a12 = a(bArr7);
                    arrayList = arrayList5;
                    arrayList.add(a12);
                    u(byteArrayOutputStream, a12.length, 4);
                    u(byteArrayOutputStream, length5, 4);
                    length = a12.length;
                } else {
                    arrayList = arrayList5;
                    arrayList.add(bArr7);
                    u(byteArrayOutputStream, bArr7.length, 4);
                    u(byteArrayOutputStream, 0L, 4);
                    length = bArr7.length;
                }
                size2 += length;
                i23++;
                arrayList5 = arrayList;
            }
            ArrayList arrayList6 = arrayList5;
            for (int i25 = 0; i25 < arrayList6.size(); i25++) {
                byteArrayOutputStream.write((byte[]) arrayList6.get(i25));
            }
            return true;
        } catch (Throwable th4) {
            try {
                byteArrayOutputStream2.close();
                throw th4;
            } catch (Throwable th5) {
                th4.addSuppressed(th5);
                throw th4;
            }
        }
    }

    public static void p(ByteArrayOutputStream byteArrayOutputStream, a aVar) {
        s(byteArrayOutputStream, aVar);
        int i5 = aVar.f20606g;
        int[] iArr = aVar.f20607h;
        int length = iArr.length;
        int i6 = 0;
        int i10 = 0;
        while (i6 < length) {
            int i11 = iArr[i6];
            v(byteArrayOutputStream, i11 - i10);
            i6++;
            i10 = i11;
        }
        byte[] bArr = new byte[(((i5 * 2) + 7) & (-8)) / 8];
        for (Map.Entry entry : aVar.f20608i.entrySet()) {
            int intValue = ((Integer) entry.getKey()).intValue();
            int intValue2 = ((Integer) entry.getValue()).intValue();
            if ((intValue2 & 2) != 0) {
                int i12 = intValue / 8;
                bArr[i12] = (byte) (bArr[i12] | (1 << (intValue % 8)));
            }
            if ((intValue2 & 4) != 0) {
                int i13 = intValue + i5;
                int i14 = i13 / 8;
                bArr[i14] = (byte) ((1 << (i13 % 8)) | bArr[i14]);
            }
        }
        byteArrayOutputStream.write(bArr);
    }

    public static void q(ByteArrayOutputStream byteArrayOutputStream, a aVar, String str) {
        Charset charset = StandardCharsets.UTF_8;
        v(byteArrayOutputStream, str.getBytes(charset).length);
        v(byteArrayOutputStream, aVar.f20604e);
        u(byteArrayOutputStream, aVar.f20605f, 4);
        u(byteArrayOutputStream, aVar.f20602c, 4);
        u(byteArrayOutputStream, aVar.f20606g, 4);
        byteArrayOutputStream.write(str.getBytes(charset));
    }

    public static void r(ByteArrayOutputStream byteArrayOutputStream, int i5, a aVar) {
        int i6 = aVar.f20606g;
        byte[] bArr = new byte[(((Integer.bitCount(i5 & (-2)) * i6) + 7) & (-8)) / 8];
        for (Map.Entry entry : aVar.f20608i.entrySet()) {
            int intValue = ((Integer) entry.getKey()).intValue();
            int intValue2 = ((Integer) entry.getValue()).intValue();
            int i10 = 0;
            for (int i11 = 1; i11 <= 4; i11 <<= 1) {
                if (i11 != 1 && (i11 & i5) != 0) {
                    if ((i11 & intValue2) == i11) {
                        int i12 = (i10 * i6) + intValue;
                        int i13 = i12 / 8;
                        bArr[i13] = (byte) ((1 << (i12 % 8)) | bArr[i13]);
                    }
                    i10++;
                }
            }
        }
        byteArrayOutputStream.write(bArr);
    }

    public static void s(ByteArrayOutputStream byteArrayOutputStream, a aVar) {
        int i5 = 0;
        for (Map.Entry entry : aVar.f20608i.entrySet()) {
            int intValue = ((Integer) entry.getKey()).intValue();
            if ((((Integer) entry.getValue()).intValue() & 1) != 0) {
                v(byteArrayOutputStream, intValue - i5);
                v(byteArrayOutputStream, 0);
                i5 = intValue;
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:100:0x01cb A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:103:0x0211  */
    /* JADX WARN: Removed duplicated region for block: B:105:0x01d2 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:10:0x0072  */
    /* JADX WARN: Removed duplicated region for block: B:130:0x021d  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x02d2  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x0221  */
    /* JADX WARN: Removed duplicated region for block: B:234:0x0107 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:41:0x02e8 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:61:0x0156  */
    /* JADX WARN: Removed duplicated region for block: B:70:0x01a1  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x01b9  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x016e A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r7v24, types: [java.io.ByteArrayOutputStream, java.io.OutputStream] */
    /* JADX WARN: Type inference failed for: r7v25, types: [int] */
    /* JADX WARN: Type inference failed for: r7v26 */
    /* JADX WARN: Type inference failed for: r7v32 */
    /* JADX WARN: Type inference failed for: r7v4 */
    /* JADX WARN: Type inference failed for: r7v46 */
    /* JADX WARN: Type inference failed for: r7v47 */
    /* JADX WARN: Type inference failed for: r7v5, types: [java.io.FileInputStream, java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r7v6 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void t(Context context, Executor executor, b bVar, boolean z5) {
        boolean z6;
        ?? r7;
        byte[] bArr;
        a[] aVarArr;
        a[] aVarArr2;
        a[] aVarArr3;
        byte[] bArr2;
        boolean z7;
        boolean z8;
        Throwable th2;
        Throwable th3;
        boolean z10;
        boolean z11;
        boolean z12;
        boolean z13;
        ?? byteArrayOutputStream;
        j jVar;
        String str;
        String str2;
        FileInputStream b10;
        boolean z14;
        boolean z15;
        Context applicationContext = context.getApplicationContext();
        String packageName = applicationContext.getPackageName();
        ApplicationInfo applicationInfo = applicationContext.getApplicationInfo();
        AssetManager assets = applicationContext.getAssets();
        String name = new File(applicationInfo.sourceDir).getName();
        try {
            PackageInfo packageInfo = context.getPackageManager().getPackageInfo(packageName, 0);
            File filesDir = context.getFilesDir();
            if (!z5) {
                File file = new File(filesDir, "profileinstaller_profileWrittenFor_lastUpdateTime.dat");
                if (file.exists()) {
                    try {
                        DataInputStream dataInputStream = new DataInputStream(new FileInputStream(file));
                        try {
                            long readLong = dataInputStream.readLong();
                            dataInputStream.close();
                            z15 = readLong == packageInfo.lastUpdateTime;
                            if (z15) {
                                bVar.g(2, null);
                            }
                        } finally {
                        }
                    } catch (IOException unused) {
                    }
                    if (z15) {
                        Log.d("ProfileInstaller", "Skipping profile installation for " + context.getPackageName());
                        h.c(context, false);
                        return;
                    }
                }
                z15 = false;
                if (z15) {
                }
            }
            Log.d("ProfileInstaller", "Installing profile for " + context.getPackageName());
            File file2 = new File(new File("/data/misc/profiles/cur/0", packageName), "primary.prof");
            j jVar2 = new j(assets, executor, bVar, name, file2);
            byte[] bArr3 = (byte[]) jVar2.f12532d;
            if (bArr3 != null) {
                if (file2.exists()) {
                    if (!file2.canWrite()) {
                        jVar2.c(4, null);
                    }
                    jVar2.a = true;
                    try {
                        try {
                            r7 = jVar2.b(assets, "dexopt/baseline.prof");
                        } catch (FileNotFoundException e9) {
                            bVar.g(6, e9);
                            r7 = 0;
                            bArr = f20609b;
                            if (r7 != 0) {
                            }
                            aVarArr2 = (a[]) jVar2.f12535g;
                            if (aVarArr2 != null) {
                            }
                            b bVar2 = (b) jVar2.f12531c;
                            aVarArr3 = (a[]) jVar2.f12535g;
                            byte[] bArr4 = (byte[]) jVar2.f12532d;
                            boolean z16 = r7;
                            z16 = r7;
                            if (aVarArr3 != null) {
                            }
                            bArr2 = (byte[]) jVar2.f12536h;
                            if (bArr2 != null) {
                            }
                            if (z8) {
                            }
                            z11 = z8;
                            z14 = z10;
                            h.c(context, (z11 || !z5) ? false : z14);
                        } catch (IOException e10) {
                            bVar.g(7, e10);
                            r7 = 0;
                            bArr = f20609b;
                            if (r7 != 0) {
                            }
                            aVarArr2 = (a[]) jVar2.f12535g;
                            if (aVarArr2 != null) {
                            }
                            b bVar22 = (b) jVar2.f12531c;
                            aVarArr3 = (a[]) jVar2.f12535g;
                            byte[] bArr42 = (byte[]) jVar2.f12532d;
                            boolean z162 = r7;
                            z162 = r7;
                            if (aVarArr3 != null) {
                            }
                            bArr2 = (byte[]) jVar2.f12536h;
                            if (bArr2 != null) {
                            }
                            if (z8) {
                            }
                            z11 = z8;
                            z14 = z10;
                            h.c(context, (z11 || !z5) ? false : z14);
                        }
                        if (r7 != 0) {
                            try {
                                try {
                                } catch (IOException e11) {
                                    bVar.g(7, e11);
                                    try {
                                        r7.close();
                                    } catch (IOException e12) {
                                        bVar.g(7, e12);
                                    }
                                    aVarArr = null;
                                    jVar2.f12535g = aVarArr;
                                    aVarArr2 = (a[]) jVar2.f12535g;
                                    if (aVarArr2 != null) {
                                    }
                                    b bVar222 = (b) jVar2.f12531c;
                                    aVarArr3 = (a[]) jVar2.f12535g;
                                    byte[] bArr422 = (byte[]) jVar2.f12532d;
                                    boolean z1622 = r7;
                                    z1622 = r7;
                                    if (aVarArr3 != null) {
                                    }
                                    bArr2 = (byte[]) jVar2.f12536h;
                                    if (bArr2 != null) {
                                    }
                                    if (z8) {
                                    }
                                    z11 = z8;
                                    z14 = z10;
                                    h.c(context, (z11 || !z5) ? false : z14);
                                }
                            } catch (IllegalStateException e13) {
                                bVar.g(8, e13);
                                r7.close();
                                aVarArr = null;
                                jVar2.f12535g = aVarArr;
                                aVarArr2 = (a[]) jVar2.f12535g;
                                if (aVarArr2 != null) {
                                }
                                b bVar2222 = (b) jVar2.f12531c;
                                aVarArr3 = (a[]) jVar2.f12535g;
                                byte[] bArr4222 = (byte[]) jVar2.f12532d;
                                boolean z16222 = r7;
                                z16222 = r7;
                                if (aVarArr3 != null) {
                                }
                                bArr2 = (byte[]) jVar2.f12536h;
                                if (bArr2 != null) {
                                }
                                if (z8) {
                                }
                                z11 = z8;
                                z14 = z10;
                                h.c(context, (z11 || !z5) ? false : z14);
                            }
                            if (!Arrays.equals(bArr, f(r7, 4))) {
                                throw new IllegalStateException("Invalid magic");
                            }
                            aVarArr = l(r7, f(r7, 4), (String) jVar2.f12534f);
                            try {
                                r7.close();
                            } catch (IOException e14) {
                                bVar.g(7, e14);
                            }
                            jVar2.f12535g = aVarArr;
                        }
                        aVarArr2 = (a[]) jVar2.f12535g;
                        if (aVarArr2 != null && ((r7 = Build.VERSION.SDK_INT) >= 31 || r7 == 24 || r7 == 25)) {
                            try {
                                str2 = "dexopt/baseline.profm";
                                b10 = jVar2.b(assets, "dexopt/baseline.profm");
                                str = str2;
                            } catch (FileNotFoundException e15) {
                                bVar.g(9, e15);
                                str = r7;
                            } catch (IOException e16) {
                                bVar.g(7, e16);
                                str = r7;
                            } catch (IllegalStateException e17) {
                                jVar2.f12535g = null;
                                bVar.g(8, e17);
                                str = r7;
                            }
                            if (b10 == null) {
                                try {
                                    if (!Arrays.equals(f20610c, f(b10, 4))) {
                                        throw new IllegalStateException("Invalid magic");
                                    }
                                    byte[] f2 = f(b10, 4);
                                    jVar2.f12535g = i(b10, f2, bArr3, aVarArr2);
                                    b10.close();
                                    jVar = jVar2;
                                    r7 = f2;
                                    if (jVar != null) {
                                        jVar2 = jVar;
                                    }
                                } finally {
                                }
                            } else {
                                if (b10 != null) {
                                    b10.close();
                                    str = str2;
                                }
                                jVar = null;
                                r7 = str;
                                if (jVar != null) {
                                }
                            }
                        }
                        b bVar22222 = (b) jVar2.f12531c;
                        aVarArr3 = (a[]) jVar2.f12535g;
                        byte[] bArr42222 = (byte[]) jVar2.f12532d;
                        boolean z162222 = r7;
                        z162222 = r7;
                        if (aVarArr3 != null && bArr42222 != null) {
                            z12 = jVar2.a;
                            if (z12) {
                                throw new IllegalStateException("This device doesn't support aot. Did you call deviceSupportsAotProfile()?");
                            }
                            try {
                                byteArrayOutputStream = new ByteArrayOutputStream();
                                try {
                                    byteArrayOutputStream.write(bArr);
                                    byteArrayOutputStream.write(bArr42222);
                                } finally {
                                }
                            } catch (IOException e18) {
                                bVar22222.g(7, e18);
                                z13 = z12;
                            } catch (IllegalStateException e19) {
                                bVar22222.g(8, e19);
                                z13 = z12;
                            }
                            if (o(byteArrayOutputStream, bArr42222, aVarArr3)) {
                                jVar2.f12536h = byteArrayOutputStream.toByteArray();
                                byteArrayOutputStream.close();
                                z13 = byteArrayOutputStream;
                                jVar2.f12535g = null;
                                z162222 = z13;
                            } else {
                                bVar22222.g(5, null);
                                jVar2.f12535g = null;
                                byteArrayOutputStream.close();
                                z162222 = byteArrayOutputStream;
                            }
                        }
                        bArr2 = (byte[]) jVar2.f12536h;
                        if (bArr2 != null) {
                            z8 = false;
                            z10 = true;
                        } else {
                            try {
                                if (!jVar2.a) {
                                    throw new IllegalStateException("This device doesn't support aot. Did you call deviceSupportsAotProfile()?");
                                }
                                try {
                                    try {
                                        ByteArrayInputStream byteArrayInputStream = new ByteArrayInputStream(bArr2);
                                        try {
                                            try {
                                                FileOutputStream fileOutputStream = new FileOutputStream((File) jVar2.f12533e);
                                                try {
                                                    try {
                                                        FileChannel channel = fileOutputStream.getChannel();
                                                        try {
                                                            FileLock tryLock = channel.tryLock();
                                                            try {
                                                                try {
                                                                    if (tryLock != null) {
                                                                        try {
                                                                            if (tryLock.isValid()) {
                                                                                byte[] bArr5 = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING];
                                                                                while (true) {
                                                                                    int read = byteArrayInputStream.read(bArr5);
                                                                                    if (read <= 0) {
                                                                                        break;
                                                                                    } else {
                                                                                        fileOutputStream.write(bArr5, 0, read);
                                                                                    }
                                                                                }
                                                                                z10 = true;
                                                                                jVar2.c(1, null);
                                                                                tryLock.close();
                                                                                channel.close();
                                                                                fileOutputStream.close();
                                                                                byteArrayInputStream.close();
                                                                                jVar2.f12536h = null;
                                                                                jVar2.f12535g = null;
                                                                                z8 = true;
                                                                            }
                                                                        } catch (Throwable th4) {
                                                                            th = th4;
                                                                            Throwable th5 = th;
                                                                            if (tryLock == null) {
                                                                                throw th5;
                                                                            }
                                                                            try {
                                                                                tryLock.close();
                                                                                throw th5;
                                                                            } catch (Throwable th6) {
                                                                                th5.addSuppressed(th6);
                                                                                throw th5;
                                                                            }
                                                                        }
                                                                    }
                                                                    throw new IOException("Unable to acquire a lock on the underlying file channel.");
                                                                } catch (Throwable th7) {
                                                                    th = th7;
                                                                    Throwable th8 = th;
                                                                    if (channel == null) {
                                                                        throw th8;
                                                                    }
                                                                    try {
                                                                        channel.close();
                                                                        throw th8;
                                                                    } catch (Throwable th9) {
                                                                        th8.addSuppressed(th9);
                                                                        throw th8;
                                                                    }
                                                                }
                                                            } catch (Throwable th10) {
                                                                th = th10;
                                                            }
                                                        } catch (Throwable th11) {
                                                            th = th11;
                                                        }
                                                    } catch (Throwable th12) {
                                                        th = th12;
                                                        th3 = th;
                                                        try {
                                                            fileOutputStream.close();
                                                            throw th3;
                                                        } catch (Throwable th13) {
                                                            th3.addSuppressed(th13);
                                                            throw th3;
                                                        }
                                                    }
                                                } catch (Throwable th14) {
                                                    th = th14;
                                                    th3 = th;
                                                    fileOutputStream.close();
                                                    throw th3;
                                                }
                                            } catch (Throwable th15) {
                                                th = th15;
                                                th2 = th;
                                                try {
                                                    byteArrayInputStream.close();
                                                    throw th2;
                                                } catch (Throwable th16) {
                                                    th2.addSuppressed(th16);
                                                    throw th2;
                                                }
                                            }
                                        } catch (Throwable th17) {
                                            th = th17;
                                            th2 = th;
                                            byteArrayInputStream.close();
                                            throw th2;
                                        }
                                    } catch (FileNotFoundException e20) {
                                        e = e20;
                                        jVar2.c(6, e);
                                        z7 = z162222;
                                        z8 = false;
                                        z10 = z7;
                                        if (z8) {
                                        }
                                        z11 = z8;
                                        z14 = z10;
                                        h.c(context, (z11 || !z5) ? false : z14);
                                    } catch (IOException e21) {
                                        e = e21;
                                        jVar2.c(7, e);
                                        z7 = z162222;
                                        z8 = false;
                                        z10 = z7;
                                        if (z8) {
                                        }
                                        z11 = z8;
                                        z14 = z10;
                                        h.c(context, (z11 || !z5) ? false : z14);
                                    }
                                } catch (FileNotFoundException e22) {
                                    e = e22;
                                    z162222 = true;
                                    jVar2.c(6, e);
                                    z7 = z162222;
                                    z8 = false;
                                    z10 = z7;
                                    if (z8) {
                                    }
                                    z11 = z8;
                                    z14 = z10;
                                    h.c(context, (z11 || !z5) ? false : z14);
                                } catch (IOException e23) {
                                    e = e23;
                                    z162222 = true;
                                    jVar2.c(7, e);
                                    z7 = z162222;
                                    z8 = false;
                                    z10 = z7;
                                    if (z8) {
                                    }
                                    z11 = z8;
                                    z14 = z10;
                                    h.c(context, (z11 || !z5) ? false : z14);
                                }
                            } finally {
                                jVar2.f12536h = null;
                                jVar2.f12535g = null;
                            }
                        }
                        if (z8) {
                            e(packageInfo, filesDir);
                        }
                        z11 = z8;
                        z14 = z10;
                    } finally {
                    }
                    bArr = f20609b;
                } else {
                    try {
                        if (!file2.createNewFile()) {
                            jVar2.c(4, null);
                        }
                        jVar2.a = true;
                        r7 = jVar2.b(assets, "dexopt/baseline.prof");
                        bArr = f20609b;
                        if (r7 != 0) {
                        }
                        aVarArr2 = (a[]) jVar2.f12535g;
                        if (aVarArr2 != null) {
                            str2 = "dexopt/baseline.profm";
                            b10 = jVar2.b(assets, "dexopt/baseline.profm");
                            str = str2;
                            if (b10 == null) {
                            }
                        }
                        b bVar222222 = (b) jVar2.f12531c;
                        aVarArr3 = (a[]) jVar2.f12535g;
                        byte[] bArr422222 = (byte[]) jVar2.f12532d;
                        boolean z1622222 = r7;
                        z1622222 = r7;
                        if (aVarArr3 != null) {
                            z12 = jVar2.a;
                            if (z12) {
                            }
                        }
                        bArr2 = (byte[]) jVar2.f12536h;
                        if (bArr2 != null) {
                        }
                        if (z8) {
                        }
                        z11 = z8;
                        z14 = z10;
                    } catch (IOException unused2) {
                        z6 = true;
                        jVar2.c(4, null);
                    }
                }
                h.c(context, (z11 || !z5) ? false : z14);
            }
            jVar2.c(3, Integer.valueOf(Build.VERSION.SDK_INT));
            z6 = true;
            z11 = false;
            z14 = z6;
            h.c(context, (z11 || !z5) ? false : z14);
        } catch (PackageManager.NameNotFoundException e24) {
            bVar.g(7, e24);
            h.c(context, false);
        }
    }

    public static void u(ByteArrayOutputStream byteArrayOutputStream, long j5, int i5) {
        byte[] bArr = new byte[i5];
        for (int i6 = 0; i6 < i5; i6++) {
            bArr[i6] = (byte) ((j5 >> (i6 * 8)) & 255);
        }
        byteArrayOutputStream.write(bArr);
    }

    public static void v(ByteArrayOutputStream byteArrayOutputStream, int i5) {
        u(byteArrayOutputStream, i5, 2);
    }
}

package com.facebook.soloader;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.LinkedHashSet;
import org.webrtc.PeerConnection;

/* loaded from: classes3.dex */
public final class j extends h0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5111d = 1;

    /* renamed from: e, reason: collision with root package name */
    public final Object f5112e;

    /* JADX WARN: Code restructure failed: missing block: B:34:0x00f5, code lost:
    
        throw new java.lang.RuntimeException("illegal line in exopackage metadata: [" + r12 + "]");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public j(l lVar, l lVar2) {
        File file;
        File file2;
        File file3 = new File("/data/local/tmp/exopackage/" + lVar.f5110d.getPackageName() + "/native-libs/");
        ArrayList arrayList = new ArrayList();
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        String[] supportedAbis = SysUtil$MarshmallowSysdeps.getSupportedAbis();
        int length = supportedAbis.length;
        int i5 = 0;
        int i6 = 0;
        loop0: while (i6 < length) {
            String str = supportedAbis[i6];
            File file4 = new File(file3, str);
            if (file4.isDirectory()) {
                linkedHashSet.add(str);
                File file5 = new File(file4, "metadata.txt");
                if (file5.isFile()) {
                    FileReader fileReader = new FileReader(file5);
                    try {
                        BufferedReader bufferedReader = new BufferedReader(fileReader);
                        while (true) {
                            try {
                                String readLine = bufferedReader.readLine();
                                if (readLine == null) {
                                    file = file3;
                                    bufferedReader.close();
                                    fileReader.close();
                                    break;
                                }
                                if (readLine.length() != 0) {
                                    int indexOf = readLine.indexOf(32);
                                    if (indexOf == -1) {
                                        break loop0;
                                    }
                                    String str2 = readLine.substring(i5, indexOf) + ".so";
                                    int size = arrayList.size();
                                    while (true) {
                                        if (i5 >= size) {
                                            file2 = file3;
                                            String substring = readLine.substring(indexOf + 1);
                                            arrayList.add(new k(str2, substring.substring(substring.indexOf(45), substring.indexOf(".so")), new File(file4, substring)));
                                            break;
                                        } else {
                                            file2 = file3;
                                            if (((k) arrayList.get(i5)).f5099d.equals(str2)) {
                                                break;
                                            }
                                            i5++;
                                            file3 = file2;
                                        }
                                    }
                                    file3 = file2;
                                    i5 = 0;
                                }
                            } catch (Throwable th2) {
                                try {
                                    bufferedReader.close();
                                    throw th2;
                                } catch (Throwable th3) {
                                    th2.addSuppressed(th3);
                                    throw th2;
                                }
                            }
                        }
                        i6++;
                        file3 = file;
                        i5 = 0;
                    } finally {
                    }
                }
            }
            file = file3;
            i6++;
            file3 = file;
            i5 = 0;
        }
        this.f5112e = (k[]) arrayList.toArray(new k[arrayList.size()]);
    }

    @Override // com.facebook.soloader.h0
    public final g0[] f() {
        switch (this.f5111d) {
            case 0:
                return (k[]) this.f5112e;
            default:
                ArrayList arrayList = new ArrayList();
                Iterator it = ((b) this.f5112e).f5087e.iterator();
                while (it.hasNext()) {
                    p pVar = (p) it.next();
                    pVar.getClass();
                    o oVar = new o(pVar, pVar);
                    try {
                        n[] nVarArr = oVar.f5116d;
                        if (nVarArr == null) {
                            nVarArr = oVar.i();
                            oVar.f5116d = nVarArr;
                        }
                        arrayList.addAll(Arrays.asList(nVarArr));
                        oVar.close();
                    } catch (Throwable th2) {
                        try {
                            oVar.close();
                        } catch (Throwable th3) {
                            th2.addSuppressed(th3);
                        }
                        throw th2;
                    }
                }
                return (g0[]) arrayList.toArray(new g0[arrayList.size()]);
        }
    }

    @Override // com.facebook.soloader.h0
    public final void g(File file) {
        switch (this.f5111d) {
            case 0:
                byte[] bArr = new byte[PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS];
                for (k kVar : (k[]) this.f5112e) {
                    FileInputStream fileInputStream = new FileInputStream(kVar.f5113i);
                    try {
                        q qVar = new q(kVar, fileInputStream);
                        fileInputStream = null;
                        try {
                            h0.c(qVar, bArr, file);
                            qVar.close();
                        } finally {
                        }
                    } catch (Throwable th2) {
                        if (fileInputStream != null) {
                            fileInputStream.close();
                        }
                        throw th2;
                    }
                }
                return;
            default:
                Iterator it = ((b) this.f5112e).f5087e.iterator();
                while (it.hasNext()) {
                    p pVar = (p) it.next();
                    pVar.getClass();
                    o oVar = new o(pVar, pVar);
                    try {
                        oVar.g(file);
                        oVar.close();
                    } catch (Throwable th3) {
                        try {
                            oVar.close();
                        } catch (Throwable th4) {
                            th3.addSuppressed(th4);
                        }
                        throw th3;
                    }
                }
                return;
        }
    }

    public j(b bVar) {
        this.f5112e = bVar;
    }
}

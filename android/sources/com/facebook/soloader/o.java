package com.facebook.soloader;

import java.io.File;
import java.io.InputStream;
import java.util.Arrays;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.zip.ZipEntry;
import java.util.zip.ZipFile;
import org.webrtc.PeerConnection;

/* loaded from: classes3.dex */
public final class o extends h0 {

    /* renamed from: d, reason: collision with root package name */
    public n[] f5116d;

    /* renamed from: e, reason: collision with root package name */
    public final ZipFile f5117e;

    /* renamed from: i, reason: collision with root package name */
    public final p f5118i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ p f5119v;

    public o(p pVar, p pVar2) {
        this.f5119v = pVar;
        this.f5117e = new ZipFile(pVar.f5120e);
        this.f5118i = pVar2;
    }

    @Override // com.facebook.soloader.h0, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f5117e.close();
    }

    @Override // com.facebook.soloader.h0
    public final g0[] f() {
        n[] nVarArr = this.f5116d;
        if (nVarArr != null) {
            return nVarArr;
        }
        n[] i5 = i();
        this.f5116d = i5;
        return i5;
    }

    @Override // com.facebook.soloader.h0
    public final void g(File file) {
        n[] nVarArr = this.f5116d;
        if (nVarArr == null) {
            nVarArr = i();
            this.f5116d = nVarArr;
        }
        byte[] bArr = new byte[PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS];
        for (n nVar : nVarArr) {
            InputStream inputStream = this.f5117e.getInputStream(nVar.f5114i);
            try {
                q qVar = new q(nVar, inputStream);
                inputStream = null;
                try {
                    h0.c(qVar, bArr, file);
                    qVar.close();
                } finally {
                }
            } catch (Throwable th2) {
                if (inputStream != null) {
                    inputStream.close();
                }
                throw th2;
            }
        }
    }

    public final n[] i() {
        LinkedHashSet linkedHashSet = new LinkedHashSet();
        HashMap hashMap = new HashMap();
        Pattern compile = Pattern.compile(this.f5119v.f5121f);
        String[] supportedAbis = SysUtil$MarshmallowSysdeps.getSupportedAbis();
        Enumeration<? extends ZipEntry> entries = this.f5117e.entries();
        while (entries.hasMoreElements()) {
            ZipEntry nextElement = entries.nextElement();
            Matcher matcher = compile.matcher(nextElement.getName());
            if (matcher.matches()) {
                int groupCount = matcher.groupCount();
                String group = matcher.group(groupCount - 1);
                String group2 = matcher.group(groupCount);
                int i5 = 0;
                while (true) {
                    if (i5 >= supportedAbis.length) {
                        i5 = -1;
                        break;
                    }
                    String str = supportedAbis[i5];
                    if (str != null && group.equals(str)) {
                        break;
                    }
                    i5++;
                }
                if (i5 >= 0) {
                    linkedHashSet.add(group);
                    n nVar = (n) hashMap.get(group2);
                    if (nVar == null || i5 < nVar.f5115v) {
                        hashMap.put(group2, new n(group2, nextElement, i5));
                    }
                }
            }
        }
        this.f5118i.getClass();
        n[] nVarArr = (n[]) hashMap.values().toArray(new n[hashMap.size()]);
        Arrays.sort(nVarArr);
        return nVarArr;
    }
}

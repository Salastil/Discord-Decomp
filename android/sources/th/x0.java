package th;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.ParcelFileDescriptor;
import android.os.Parcelable;
import com.discord.js_watchdog.SharedPreferencesKey;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.concurrent.Executor;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes3.dex */
public final class x0 implements u1 {

    /* renamed from: h, reason: collision with root package name */
    public static final a5.m f18616h = new a5.m("FakeAssetPackService", 3);

    /* renamed from: i, reason: collision with root package name */
    public static final AtomicInteger f18617i = new AtomicInteger(1);
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final p f18618b;

    /* renamed from: c, reason: collision with root package name */
    public final p0 f18619c;

    /* renamed from: d, reason: collision with root package name */
    public final h1 f18620d;

    /* renamed from: e, reason: collision with root package name */
    public final g1 f18621e;

    /* renamed from: f, reason: collision with root package name */
    public final Handler f18622f = new Handler(Looper.getMainLooper());

    /* renamed from: g, reason: collision with root package name */
    public final uh.f f18623g;

    public x0(File file, p pVar, p0 p0Var, Context context, h1 h1Var, uh.f fVar, g1 g1Var) {
        this.a = file.getAbsolutePath();
        this.f18618b = pVar;
        this.f18619c = p0Var;
        this.f18620d = h1Var;
        this.f18623g = fVar;
        this.f18621e = g1Var;
    }

    public static long h(int i5, long j) {
        if (i5 == 2) {
            return j / 2;
        }
        if (i5 == 3 || i5 == 4) {
            return j;
        }
        return 0L;
    }

    @Override // th.u1
    public final jg.l a(ArrayList arrayList, HashMap hashMap) {
        f18616h.e("startDownload(%s)", arrayList);
        jg.g gVar = new jg.g();
        ((Executor) this.f18623g.a()).execute(new a5.s(this, arrayList, gVar, 13));
        return gVar.a;
    }

    @Override // th.u1
    public final void b(int i5) {
        f18616h.e("notifySessionFailed", new Object[0]);
    }

    @Override // th.u1
    public final void c(int i5, String str) {
        f18616h.e("notifyModuleCompleted", new Object[0]);
        ((Executor) this.f18623g.a()).execute(new androidx.appcompat.widget.v0(this, i5, str));
    }

    @Override // th.u1
    public final void d(int i5, int i6, String str, String str2) {
        f18616h.e("notifyChunkTransferred", new Object[0]);
    }

    @Override // th.u1
    public final void e(List list) {
        f18616h.e("cancelDownload(%s)", list);
    }

    @Override // th.u1
    public final jg.l f(int i5, int i6, String str, String str2) {
        int i10;
        Object[] objArr = {Integer.valueOf(i5), str, str2, Integer.valueOf(i6)};
        a5.m mVar = f18616h;
        mVar.e("getChunkFileDescriptor(session=%d, %s, %s, %d)", objArr);
        jg.g gVar = new jg.g();
        try {
        } catch (FileNotFoundException e9) {
            mVar.g("getChunkFileDescriptor failed", e9);
            gVar.a(new wh.a("Asset Slice file not found.", e9));
        } catch (wh.a e10) {
            mVar.g("getChunkFileDescriptor failed", e10);
            gVar.a(e10);
        }
        for (File file : j(str)) {
            if (zo.c0.c(file).equals(str2)) {
                gVar.b(ParcelFileDescriptor.open(file, 268435456));
                return gVar.a;
            }
        }
        throw new wh.a("Local testing slice for '" + str2 + "' not found.");
    }

    @Override // th.u1
    public final jg.l g(HashMap hashMap) {
        f18616h.e("syncPacks()", new Object[0]);
        return a5.k0.s(new ArrayList());
    }

    public final void i(int i5, int i6, String str) {
        Bundle bundle = new Bundle();
        bundle.putInt("app_version_code", this.f18620d.a());
        bundle.putInt(SharedPreferencesKey.SESSION_ID, i5);
        File[] j = j(str);
        ArrayList<String> arrayList = new ArrayList<>();
        int length = j.length;
        long j5 = 0;
        int i10 = 0;
        while (i10 < length) {
            File file = j[i10];
            long length2 = j5 + file.length();
            ArrayList<? extends Parcelable> arrayList2 = new ArrayList<>();
            arrayList2.add(i6 == 3 ? new Intent().setData(Uri.EMPTY) : null);
            String c6 = zo.c0.c(file);
            bundle.putParcelableArrayList(a5.k0.j("chunk_intents", str, c6), arrayList2);
            try {
                bundle.putString(a5.k0.j("uncompressed_hash_sha256", str, c6), a.a(Arrays.asList(file)));
                bundle.putLong(a5.k0.j("uncompressed_size", str, c6), file.length());
                arrayList.add(c6);
                i10++;
                j5 = length2;
            } catch (IOException e9) {
                throw new wh.a(String.format("Could not digest file: %s.", file), e9);
            } catch (NoSuchAlgorithmException e10) {
                throw new wh.a("SHA256 algorithm not supported.", e10);
            }
        }
        bundle.putStringArrayList(a5.k0.b("slice_ids", str), arrayList);
        bundle.putLong(a5.k0.b("pack_version", str), r5.a());
        bundle.putInt(a5.k0.b("status", str), i6);
        bundle.putInt(a5.k0.b("error_code", str), 0);
        bundle.putLong(a5.k0.b("bytes_downloaded", str), h(i6, j5));
        bundle.putLong(a5.k0.b("total_bytes_to_download", str), j5);
        bundle.putStringArrayList("pack_names", new ArrayList<>(Arrays.asList(str)));
        bundle.putLong("bytes_downloaded", h(i6, j5));
        bundle.putLong("total_bytes_to_download", j5);
        this.f18622f.post(new com.google.android.gms.internal.play_billing.v0(21, this, new Intent("com.google.android.play.core.assetpacks.receiver.ACTION_SESSION_UPDATE").putExtra("com.google.android.play.core.assetpacks.receiver.EXTRA_SESSION_STATE", bundle)));
    }

    public final File[] j(String str) {
        File file = new File(this.a);
        if (!file.isDirectory()) {
            throw new wh.a(String.format("Local testing directory '%s' not found.", file));
        }
        File[] listFiles = file.listFiles(new pb.a(str, 1));
        if (listFiles == null) {
            throw new wh.a(s4.h.f("Failed fetching APKs for pack '", str, "'."));
        }
        if (listFiles.length == 0) {
            throw new wh.a(s4.h.f("No APKs available for pack '", str, "'."));
        }
        for (File file2 : listFiles) {
            if (zo.c0.c(file2).equals(str)) {
                return listFiles;
            }
        }
        throw new wh.a(s4.h.f("No main slice available for pack '", str, "'."));
    }

    @Override // th.u1
    public final void f() {
        f18616h.e("keepAlive", new Object[0]);
    }
}

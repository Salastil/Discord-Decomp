package th;

import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.Parcelable;
import android.util.Base64;
import com.discord.js_watchdog.SharedPreferencesKey;
import java.io.File;
import java.io.FileInputStream;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes3.dex */
public abstract class a {
    public static final wi.d a = new wi.d(17);

    /* renamed from: b, reason: collision with root package name */
    public static final j8.b f18392b = new j8.b(18, 0);

    /* renamed from: c, reason: collision with root package name */
    public static final lh.f f18393c = new lh.f(18);

    public static String a(List list) {
        int read;
        MessageDigest messageDigest = MessageDigest.getInstance("SHA256");
        byte[] bArr = new byte[8192];
        Iterator it = list.iterator();
        while (it.hasNext()) {
            FileInputStream fileInputStream = new FileInputStream((File) it.next());
            do {
                try {
                    read = fileInputStream.read(bArr);
                    if (read > 0) {
                        messageDigest.update(bArr, 0, read);
                    }
                } catch (Throwable th2) {
                    try {
                        fileInputStream.close();
                    } catch (Throwable th3) {
                        th2.addSuppressed(th3);
                    }
                    throw th2;
                }
            } while (read != -1);
            fileInputStream.close();
        }
        return Base64.encodeToString(messageDigest.digest(), 11);
    }

    public static v3.f b(Bundle bundle, Bundle bundle2) {
        kt.g gVar = new kt.g();
        gVar.a.put("BUNDLE_DATA_CONVERTER_VERSION", "1.0");
        d(new k2.r("session_bundle:", bundle, gVar, 17));
        c(new k2.r("notification_bundle:", bundle2, gVar, 17));
        v3.f fVar = new v3.f(gVar.a);
        v3.f.b(fVar);
        return fVar;
    }

    public static void c(k2.r rVar) {
        rVar.v("notification_channel_name");
        rVar.v("notification_title");
        rVar.v("notification_subtext");
        rVar.l("notification_color");
        rVar.u(600000L, "notification_timeout");
        switch (rVar.f13141d) {
            case 17:
                Bundle bundle = (Bundle) rVar.f13143i;
                String str = (String) rVar.f13142e;
                ((kt.g) rVar.f13144v).a.put(str.concat("notification_intent_reconstruct_from_data"), Boolean.valueOf(bundle.getBoolean("notification_intent_reconstruct_from_data")));
                break;
            default:
                String str2 = (String) rVar.f13142e;
                Bundle bundle2 = (Bundle) rVar.f13144v;
                Object obj = ((v3.f) rVar.f13143i).a.get(str2.concat("notification_intent_reconstruct_from_data"));
                bundle2.putBoolean("notification_intent_reconstruct_from_data", obj instanceof Boolean ? ((Boolean) obj).booleanValue() : false);
                break;
        }
        rVar.v("notification_intent_component_class_name");
        rVar.v("notification_intent_component_package_name");
        rVar.v("notification_intent_package");
        rVar.v("notification_intent_action");
        rVar.v("notification_intent_data");
        rVar.l("notification_intent_flags");
        rVar.v("notification_intent_extra_error_dialog_document_id");
    }

    public static void d(k2.r rVar) {
        rVar.l(SharedPreferencesKey.SESSION_ID);
        rVar.l("app_version_code");
        for (String str : rVar.d("pack_names")) {
            rVar.r(a5.k0.b("pack_version", str));
            rVar.v(a5.k0.b("pack_version_tag", str));
            rVar.l(a5.k0.b("status", str));
            rVar.r(a5.k0.b("total_bytes_to_download", str));
            for (String str2 : rVar.d(a5.k0.b("slice_ids", str))) {
                String j = a5.k0.j("chunk_intents", str, str2);
                switch (rVar.f13141d) {
                    case 17:
                        ArrayList parcelableArrayList = ((Bundle) rVar.f13143i).getParcelableArrayList(j);
                        if (parcelableArrayList == null) {
                            break;
                        } else {
                            String[] strArr = new String[parcelableArrayList.size()];
                            for (int i5 = 0; i5 < parcelableArrayList.size(); i5++) {
                                Intent intent = (Intent) parcelableArrayList.get(i5);
                                strArr[i5] = (intent == null || intent.getData() == null) ? "" : intent.getData().toString();
                            }
                            ((kt.g) rVar.f13144v).a.put(k0.d.l((String) rVar.f13142e, j, ":intent_data"), strArr);
                            break;
                        }
                    default:
                        Object obj = ((v3.f) rVar.f13143i).a.get(a3.e.n(new StringBuilder(), (String) rVar.f13142e, j, ":intent_data"));
                        String[] strArr2 = obj instanceof String[] ? (String[]) obj : null;
                        if (strArr2 == null) {
                            break;
                        } else {
                            ArrayList<? extends Parcelable> arrayList = new ArrayList<>(strArr2.length);
                            for (String str3 : strArr2) {
                                arrayList.add(str3.isEmpty() ? null : new Intent().setData(Uri.parse(str3)));
                            }
                            ((Bundle) rVar.f13144v).putParcelableArrayList(j, arrayList);
                            break;
                        }
                }
                rVar.v(a5.k0.j("uncompressed_hash_sha256", str, str2));
                rVar.r(a5.k0.j("uncompressed_size", str, str2));
                rVar.l(a5.k0.j("patch_format", str, str2));
                rVar.l(a5.k0.j("compression_format", str, str2));
            }
        }
    }
}

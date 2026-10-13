package z0;

import android.content.Context;
import android.content.Intent;
import android.content.LocusId;
import android.content.pm.ShortcutInfo;
import android.os.Build;
import android.os.PersistableBundle;
import android.text.TextUtils;
import androidx.core.app.Person;
import androidx.core.content.pm.ShortcutInfoCompat;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.Arrays;
import y0.e;

/* loaded from: classes.dex */
public final class a {
    public final ShortcutInfoCompat a;

    public a(Context context, ShortcutInfo shortcutInfo) {
        Person[] personArr;
        String string;
        ShortcutInfoCompat shortcutInfoCompat = new ShortcutInfoCompat();
        this.a = shortcutInfoCompat;
        shortcutInfoCompat.a = context;
        shortcutInfoCompat.f1500b = shortcutInfo.getId();
        shortcutInfo.getPackage();
        Intent[] intents = shortcutInfo.getIntents();
        shortcutInfoCompat.f1501c = (Intent[]) Arrays.copyOf(intents, intents.length);
        shortcutInfoCompat.f1502d = shortcutInfo.getActivity();
        shortcutInfoCompat.f1503e = shortcutInfo.getShortLabel();
        shortcutInfoCompat.f1504f = shortcutInfo.getLongLabel();
        shortcutInfoCompat.f1505g = shortcutInfo.getDisabledMessage();
        if (Build.VERSION.SDK_INT >= 28) {
            shortcutInfo.getDisabledReason();
        } else {
            shortcutInfo.isEnabled();
        }
        shortcutInfoCompat.j = shortcutInfo.getCategories();
        PersistableBundle extras = shortcutInfo.getExtras();
        e eVar = null;
        if (extras == null || !extras.containsKey("extraPersonCount")) {
            personArr = null;
        } else {
            int i5 = extras.getInt("extraPersonCount");
            personArr = new Person[i5];
            int i6 = 0;
            while (i6 < i5) {
                StringBuilder sb2 = new StringBuilder("extraPerson_");
                int i10 = i6 + 1;
                sb2.append(i10);
                PersistableBundle persistableBundle = extras.getPersistableBundle(sb2.toString());
                String string2 = persistableBundle.getString(StackTraceHelper.NAME_KEY);
                String string3 = persistableBundle.getString("uri");
                String string4 = persistableBundle.getString("key");
                boolean z5 = persistableBundle.getBoolean("isBot");
                boolean z6 = persistableBundle.getBoolean("isImportant");
                Person person = new Person();
                person.a = string2;
                person.f1481b = null;
                person.f1482c = string3;
                person.f1483d = string4;
                person.f1484e = z5;
                person.f1485f = z6;
                personArr[i6] = person;
                i6 = i10;
            }
        }
        shortcutInfoCompat.f1507i = personArr;
        shortcutInfo.getUserHandle();
        shortcutInfo.getLastChangedTimestamp();
        int i11 = Build.VERSION.SDK_INT;
        if (i11 >= 30) {
            shortcutInfo.isCached();
        }
        shortcutInfo.isDynamic();
        shortcutInfo.isPinned();
        shortcutInfo.isDeclaredInManifest();
        shortcutInfo.isImmutable();
        shortcutInfo.isEnabled();
        shortcutInfo.hasKeyFieldsOnly();
        ShortcutInfoCompat shortcutInfoCompat2 = this.a;
        if (i11 < 29) {
            PersistableBundle extras2 = shortcutInfo.getExtras();
            if (extras2 != null && (string = extras2.getString("extraLocusId")) != null) {
                eVar = new e(string);
            }
        } else if (shortcutInfo.getLocusId() != null) {
            LocusId locusId = shortcutInfo.getLocusId();
            ta.a.k(locusId, "locusId cannot be null");
            String d6 = y0.b.d(locusId);
            if (TextUtils.isEmpty(d6)) {
                throw new IllegalArgumentException("id cannot be empty");
            }
            eVar = new e(d6);
        }
        shortcutInfoCompat2.k = eVar;
        this.a.f1509m = shortcutInfo.getRank();
        this.a.f1510n = shortcutInfo.getExtras();
    }
}

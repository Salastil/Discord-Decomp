package androidx.core.app;

import ad.d0;
import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.content.LocusId;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.PorterDuff;
import android.graphics.drawable.Icon;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.text.TextUtils;
import androidx.core.graphics.drawable.IconCompat;
import com.discord.R;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.dialog.AlertFragment;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;
import x0.a0;
import x0.b0;
import x0.c0;
import x0.f;
import x0.g;
import x0.m;
import x0.o;
import x0.p;
import x0.q;
import x0.r;
import x0.s;
import x0.t;
import x0.u;
import x0.v0;
import x0.z;
import y0.b;
import y0.e;

/* loaded from: classes.dex */
public final class NotificationCompat$Builder {
    public final boolean A;
    public String B;
    public Bundle C;
    public int D;
    public int E;
    public final Notification F;
    public String G;
    public final int H;
    public String I;
    public e J;
    public final long K;
    public final boolean L;
    public final b0 M;
    public final Notification N;
    public boolean O;
    public final Icon P;
    public final ArrayList Q;
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f1447b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f1448c;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f1449d;

    /* renamed from: e, reason: collision with root package name */
    public CharSequence f1450e;

    /* renamed from: f, reason: collision with root package name */
    public CharSequence f1451f;

    /* renamed from: g, reason: collision with root package name */
    public final String f1452g;

    /* renamed from: h, reason: collision with root package name */
    public PendingIntent f1453h;

    /* renamed from: i, reason: collision with root package name */
    public PendingIntent f1454i;
    public IconCompat j;
    public final CharSequence k;

    /* renamed from: l, reason: collision with root package name */
    public int f1455l;

    /* renamed from: m, reason: collision with root package name */
    public int f1456m;

    /* renamed from: n, reason: collision with root package name */
    public boolean f1457n;

    /* renamed from: o, reason: collision with root package name */
    public final boolean f1458o;

    /* renamed from: p, reason: collision with root package name */
    public v0 f1459p;

    /* renamed from: q, reason: collision with root package name */
    public CharSequence f1460q;

    /* renamed from: r, reason: collision with root package name */
    public final CharSequence f1461r;

    /* renamed from: s, reason: collision with root package name */
    public final int f1462s;

    /* renamed from: t, reason: collision with root package name */
    public final int f1463t;

    /* renamed from: u, reason: collision with root package name */
    public final boolean f1464u;

    /* renamed from: v, reason: collision with root package name */
    public String f1465v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f1466w;

    /* renamed from: x, reason: collision with root package name */
    public final String f1467x;

    /* renamed from: y, reason: collision with root package name */
    public boolean f1468y;

    /* renamed from: z, reason: collision with root package name */
    public final boolean f1469z;

    public NotificationCompat$Builder(Context context, String str) {
        this.f1447b = new ArrayList();
        this.f1448c = new ArrayList();
        this.f1449d = new ArrayList();
        this.f1457n = true;
        this.f1468y = false;
        this.D = 0;
        this.E = 0;
        this.H = 0;
        Notification notification = new Notification();
        this.N = notification;
        this.a = context;
        this.G = str;
        notification.when = System.currentTimeMillis();
        notification.audioStreamType = -1;
        this.f1456m = 0;
        this.Q = new ArrayList();
        this.L = true;
    }

    public static CharSequence e(CharSequence charSequence) {
        return charSequence == null ? charSequence : charSequence.length() > 5120 ? charSequence.subSequence(0, 5120) : charSequence;
    }

    public final void a(int i5, PendingIntent pendingIntent, String str) {
        this.f1447b.add(new NotificationCompat$Action(i5 != 0 ? IconCompat.d(null, "", i5) : null, str, pendingIntent, new Bundle(), null, null, true, 0, true, false, false));
    }

    public final void b(Bundle bundle) {
        if (bundle != null) {
            Bundle bundle2 = this.C;
            if (bundle2 == null) {
                this.C = new Bundle(bundle);
            } else {
                bundle2.putAll(bundle);
            }
        }
    }

    public final Notification c() {
        Notification notification;
        Bundle bundle;
        d0 d0Var = new d0(this);
        NotificationCompat$Builder notificationCompat$Builder = (NotificationCompat$Builder) d0Var.f319v;
        v0 v0Var = notificationCompat$Builder.f1459p;
        if (v0Var != null) {
            v0Var.b(d0Var);
        }
        Notification.Builder builder = (Notification.Builder) d0Var.f318i;
        int i5 = d0Var.f316d;
        if (Build.VERSION.SDK_INT >= 26) {
            notification = builder.build();
        } else {
            Notification build = builder.build();
            if (i5 != 0) {
                if (build.getGroup() != null && (build.flags & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0 && i5 == 2) {
                    build.sound = null;
                    build.vibrate = null;
                    build.defaults &= -4;
                }
                if (build.getGroup() != null && (build.flags & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) == 0 && i5 == 1) {
                    build.sound = null;
                    build.vibrate = null;
                    build.defaults &= -4;
                }
            }
            notification = build;
        }
        if (v0Var != null) {
            notificationCompat$Builder.f1459p.getClass();
        }
        if (v0Var != null && (bundle = notification.extras) != null) {
            v0Var.a(bundle);
        }
        return notification;
    }

    public final Bundle d() {
        if (this.C == null) {
            this.C = new Bundle();
        }
        return this.C;
    }

    public final void f(int i5) {
        Notification notification = this.N;
        notification.defaults = i5;
        if ((i5 & 4) != 0) {
            notification.flags |= 1;
        }
    }

    public final void g(int i5, boolean z5) {
        Notification notification = this.N;
        if (z5) {
            notification.flags = i5 | notification.flags;
        } else {
            notification.flags = (~i5) & notification.flags;
        }
    }

    public final void h(Bitmap bitmap) {
        IconCompat c6;
        if (bitmap == null) {
            c6 = null;
        } else {
            if (Build.VERSION.SDK_INT < 27) {
                Resources resources = this.a.getResources();
                int dimensionPixelSize = resources.getDimensionPixelSize(R.dimen.compat_notification_large_icon_max_width);
                int dimensionPixelSize2 = resources.getDimensionPixelSize(R.dimen.compat_notification_large_icon_max_height);
                if (bitmap.getWidth() > dimensionPixelSize || bitmap.getHeight() > dimensionPixelSize2) {
                    double min = Math.min(dimensionPixelSize / Math.max(1, bitmap.getWidth()), dimensionPixelSize2 / Math.max(1, bitmap.getHeight()));
                    bitmap = Bitmap.createScaledBitmap(bitmap, (int) Math.ceil(bitmap.getWidth() * min), (int) Math.ceil(bitmap.getHeight() * min), true);
                }
            }
            c6 = IconCompat.c(bitmap);
        }
        this.j = c6;
    }

    public final void i(int i5, int i6, int i10) {
        Notification notification = this.N;
        notification.ledARGB = i5;
        notification.ledOnMS = i6;
        notification.ledOffMS = i10;
        notification.flags = ((i6 == 0 || i10 == 0) ? 0 : 1) | (notification.flags & (-2));
    }

    public final void j(v0 v0Var) {
        if (this.f1459p != v0Var) {
            this.f1459p = v0Var;
            if (v0Var == null || v0Var.a == this) {
                return;
            }
            v0Var.a = this;
            j(v0Var);
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /* JADX WARN: Removed duplicated region for block: B:132:0x03ba  */
    /* JADX WARN: Removed duplicated region for block: B:156:0x0464  */
    /* JADX WARN: Removed duplicated region for block: B:173:0x048b  */
    /* JADX WARN: Removed duplicated region for block: B:192:0x04bb A[LOOP:6: B:190:0x04b5->B:192:0x04bb, LOOP_END] */
    /* JADX WARN: Removed duplicated region for block: B:196:0x04d7  */
    /* JADX WARN: Removed duplicated region for block: B:213:0x01ec  */
    /* JADX WARN: Removed duplicated region for block: B:223:0x01bc  */
    /* JADX WARN: Removed duplicated region for block: B:224:0x0198  */
    /* JADX WARN: Removed duplicated region for block: B:225:0x018d  */
    /* JADX WARN: Removed duplicated region for block: B:226:0x0139  */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0137  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x0188  */
    /* JADX WARN: Removed duplicated region for block: B:48:0x0193  */
    /* JADX WARN: Removed duplicated region for block: B:51:0x01b7  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x01e3  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0277  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x028a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public NotificationCompat$Builder(Context context, Notification notification) {
        this(context, r2 >= 26 ? notification.getChannelId() : null);
        e eVar;
        b0 b0Var;
        Bundle bundle;
        String str;
        String str2;
        String str3;
        NotificationCompat$Builder notificationCompat$Builder;
        Icon a;
        Notification.Action[] actionArr;
        ArrayList arrayList;
        Bundle bundle2;
        String[] stringArray;
        int i5;
        ArrayList parcelableArrayList;
        Iterator it;
        Bundle bundle3;
        int i6;
        Bundle[] bundleArr;
        Bundle[] bundleArr2;
        int length;
        int i10;
        Notification.Action[] actionArr2;
        u uVar;
        Set<String> allowedDataTypes;
        Notification.BubbleMetadata c6;
        LocusId e9;
        int i11 = Build.VERSION.SDK_INT;
        Bundle bundle4 = notification.extras;
        v0 d6 = v0.d(notification);
        this.f1450e = e(notification.extras.getCharSequence("android.title"));
        this.f1451f = e(notification.extras.getCharSequence("android.text"));
        this.k = e(notification.extras.getCharSequence("android.infoText"));
        this.f1460q = e(notification.extras.getCharSequence("android.subText"));
        this.f1461r = e(i11 >= 26 ? notification.getSettingsText() : null);
        j(d6);
        this.f1465v = notification.getGroup();
        this.f1466w = (notification.flags & IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING) != 0;
        if (i11 < 29 || (e9 = g.e(notification)) == null) {
            eVar = null;
        } else {
            String d7 = b.d(e9);
            if (!TextUtils.isEmpty(d7)) {
                eVar = new e(d7);
            } else {
                throw new IllegalArgumentException("id cannot be empty");
            }
        }
        this.J = eVar;
        this.N.when = notification.when;
        this.f1457n = notification.extras.getBoolean("android.showWhen");
        this.f1458o = notification.extras.getBoolean("android.showChronometer");
        g(16, (notification.flags & 16) != 0);
        g(8, (notification.flags & 8) != 0);
        g(2, (notification.flags & 2) != 0);
        this.f1468y = (notification.flags & IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER) != 0;
        h(notification.largeIcon);
        this.H = i11 >= 26 ? notification.getBadgeIconType() : 0;
        this.B = notification.category;
        if (i11 >= 29 && (c6 = g.c(notification)) != null) {
            if (i11 >= 30) {
                b0Var = a0.a(c6);
            } else if (i11 == 29) {
                b0Var = z.a(c6);
            }
            this.M = b0Var;
            this.f1455l = notification.number;
            this.N.tickerText = e(notification.tickerText);
            this.f1453h = notification.contentIntent;
            this.N.deleteIntent = notification.deleteIntent;
            PendingIntent pendingIntent = notification.fullScreenIntent;
            boolean z5 = (notification.flags & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0;
            this.f1454i = pendingIntent;
            g(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, z5);
            Uri uri = notification.sound;
            int i12 = notification.audioStreamType;
            Notification notification2 = this.N;
            notification2.sound = uri;
            notification2.audioStreamType = i12;
            notification2.audioAttributes = c0.a(c0.d(c0.c(c0.b(), 4), i12));
            this.N.vibrate = notification.vibrate;
            i(notification.ledARGB, notification.ledOnMS, notification.ledOffMS);
            f(notification.defaults);
            this.f1456m = notification.priority;
            this.D = notification.color;
            this.E = notification.visibility;
            this.F = notification.publicVersion;
            this.f1467x = notification.getSortKey();
            this.K = i11 < 26 ? notification.getTimeoutAfter() : 0L;
            this.I = i11 < 26 ? notification.getShortcutId() : null;
            int i13 = bundle4.getInt("android.progressMax");
            int i14 = bundle4.getInt("android.progress");
            boolean z6 = bundle4.getBoolean("android.progressIndeterminate");
            this.f1462s = i13;
            this.f1463t = i14;
            this.f1464u = z6;
            this.L = i11 < 29 ? g.b(notification) : false;
            int i15 = notification.icon;
            int i16 = notification.iconLevel;
            Notification notification3 = this.N;
            notification3.icon = i15;
            notification3.iconLevel = i16;
            if (notification.extras != null) {
                notificationCompat$Builder = this;
                str2 = "android.car.EXTENSIONS";
                str = "android.people";
                str3 = "invisible_actions";
                bundle = null;
            } else {
                bundle = new Bundle(notification.extras);
                bundle.remove("android.title");
                bundle.remove("android.text");
                bundle.remove("android.infoText");
                bundle.remove("android.subText");
                if (i11 >= 36) {
                    bundle.remove("android.shortCriticalText");
                }
                bundle.remove("android.intent.extra.CHANNEL_ID");
                bundle.remove("android.intent.extra.CHANNEL_GROUP_ID");
                bundle.remove("android.showWhen");
                bundle.remove("android.progress");
                bundle.remove("android.progressMax");
                bundle.remove("android.progressIndeterminate");
                bundle.remove("android.chronometerCountDown");
                bundle.remove("android.colorized");
                bundle.remove("android.people.list");
                str = "android.people";
                bundle.remove(str);
                bundle.remove("android.support.sortKey");
                bundle.remove("android.support.groupKey");
                bundle.remove("android.support.isGroupSummary");
                bundle.remove("android.support.localOnly");
                bundle.remove("android.support.actionExtras");
                str2 = "android.car.EXTENSIONS";
                Bundle bundle5 = bundle.getBundle(str2);
                if (bundle5 != null) {
                    Bundle bundle6 = new Bundle(bundle5);
                    str3 = "invisible_actions";
                    bundle6.remove(str3);
                    bundle.putBundle(str2, bundle6);
                } else {
                    str3 = "invisible_actions";
                }
                if (d6 != null) {
                    d6.c(bundle);
                }
                notificationCompat$Builder = this;
            }
            notificationCompat$Builder.b(bundle);
            notificationCompat$Builder.P = x0.d0.b(notification);
            a = x0.d0.a(notification);
            if (a != null) {
                PorterDuff.Mode mode = IconCompat.k;
                notificationCompat$Builder.j = ki.b.l(a);
            }
            actionArr = notification.actions;
            if (actionArr != null && actionArr.length != 0) {
                length = actionArr.length;
                i10 = 0;
                while (i10 < length) {
                    Notification.Action action = actionArr[i10];
                    if (p.a(action) != null) {
                        Icon a10 = p.a(action);
                        PorterDuff.Mode mode2 = IconCompat.k;
                        actionArr2 = actionArr;
                        uVar = new u((ki.b.G(a10) == 2 && ki.b.C(a10) == 0) ? null : ki.b.l(a10), action.title, action.actionIntent);
                    } else {
                        actionArr2 = actionArr;
                        uVar = new u(action.icon, action.title, action.actionIntent);
                    }
                    android.app.RemoteInput[] b10 = o.b(action);
                    if (b10 != null && b10.length != 0) {
                        int length2 = b10.length;
                        int i17 = 0;
                        while (i17 < length2) {
                            android.app.RemoteInput remoteInput = b10[i17];
                            String resultKey = remoteInput.getResultKey();
                            android.app.RemoteInput[] remoteInputArr = b10;
                            HashSet hashSet = new HashSet();
                            int i18 = length2;
                            Bundle bundle7 = new Bundle();
                            if (resultKey != null) {
                                CharSequence label = remoteInput.getLabel();
                                CharSequence[] choices = remoteInput.getChoices();
                                boolean allowFreeFormInput = remoteInput.getAllowFreeFormInput();
                                int i19 = length;
                                Bundle extras = remoteInput.getExtras();
                                if (extras != null) {
                                    bundle7.putAll(extras);
                                }
                                if (Build.VERSION.SDK_INT >= 26 && (allowedDataTypes = remoteInput.getAllowedDataTypes()) != null) {
                                    Iterator<String> it2 = allowedDataTypes.iterator();
                                    while (it2.hasNext()) {
                                        hashSet.add(it2.next());
                                    }
                                }
                                RemoteInput remoteInput2 = new RemoteInput(resultKey, label, choices, allowFreeFormInput, Build.VERSION.SDK_INT >= 29 ? g.d(remoteInput) : 0, bundle7, hashSet);
                                if (uVar.f20221f == null) {
                                    uVar.f20221f = new ArrayList();
                                }
                                uVar.f20221f.add(remoteInput2);
                                i17++;
                                b10 = remoteInputArr;
                                length2 = i18;
                                length = i19;
                            } else {
                                throw new IllegalArgumentException("Result key can't be null");
                            }
                        }
                    }
                    int i20 = length;
                    int i21 = Build.VERSION.SDK_INT;
                    uVar.f20219d = q.a(action);
                    if (i21 >= 28) {
                        uVar.f20222g = r.a(action);
                    }
                    if (i21 >= 29) {
                        uVar.f20224i = s.a(action);
                    }
                    if (i21 >= 31) {
                        uVar.j = t.a(action);
                    }
                    Bundle a11 = o.a(action);
                    if (a11 != null) {
                        uVar.f20220e.putAll(a11);
                    }
                    notificationCompat$Builder.f1447b.add(uVar.a());
                    i10++;
                    actionArr = actionArr2;
                    length = i20;
                }
            }
            arrayList = new ArrayList();
            bundle2 = notification.extras.getBundle(str2);
            if (bundle2 != null && (bundle3 = bundle2.getBundle(str3)) != null) {
                for (i6 = 0; i6 < bundle3.size(); i6++) {
                    Bundle bundle8 = bundle3.getBundle(Integer.toString(i6));
                    Bundle bundle9 = bundle8.getBundle("extras");
                    boolean z7 = bundle9 != null ? bundle9.getBoolean("android.support.allowGeneratedReplies", false) : false;
                    int i22 = bundle8.getInt("icon");
                    CharSequence charSequence = bundle8.getCharSequence(AlertFragment.ARG_TITLE);
                    PendingIntent pendingIntent2 = (PendingIntent) bundle8.getParcelable("actionIntent");
                    Bundle bundle10 = bundle8.getBundle("extras");
                    Parcelable[] parcelableArray = bundle8.getParcelableArray("remoteInputs");
                    if (!(parcelableArray instanceof Bundle[]) && parcelableArray != null) {
                        bundleArr = (Bundle[]) Arrays.copyOf(parcelableArray, parcelableArray.length, Bundle[].class);
                        bundle8.putParcelableArray("remoteInputs", bundleArr);
                    } else {
                        bundleArr = (Bundle[]) parcelableArray;
                    }
                    RemoteInput[] a12 = f.a(bundleArr);
                    Parcelable[] parcelableArray2 = bundle8.getParcelableArray("dataOnlyRemoteInputs");
                    if (!(parcelableArray2 instanceof Bundle[]) && parcelableArray2 != null) {
                        bundleArr2 = (Bundle[]) Arrays.copyOf(parcelableArray2, parcelableArray2.length, Bundle[].class);
                        bundle8.putParcelableArray("dataOnlyRemoteInputs", bundleArr2);
                    } else {
                        bundleArr2 = (Bundle[]) parcelableArray2;
                    }
                    arrayList.add(new NotificationCompat$Action(i22 == 0 ? null : IconCompat.d(null, "", i22), charSequence, pendingIntent2, bundle10, a12, f.a(bundleArr2), z7, bundle8.getInt("semanticAction"), bundle8.getBoolean("showsUserInterface"), false, false));
                }
            }
            if (!arrayList.isEmpty()) {
                Iterator it3 = arrayList.iterator();
                while (it3.hasNext()) {
                    NotificationCompat$Action notificationCompat$Action = (NotificationCompat$Action) it3.next();
                    if (notificationCompat$Action != null) {
                        notificationCompat$Builder.f1449d.add(notificationCompat$Action);
                    }
                }
            }
            stringArray = notification.extras.getStringArray(str);
            if (stringArray != null && stringArray.length != 0) {
                for (String str4 : stringArray) {
                    if (str4 != null && !str4.isEmpty()) {
                        notificationCompat$Builder.Q.add(str4);
                    }
                }
            }
            if (Build.VERSION.SDK_INT >= 28 && (parcelableArrayList = notification.extras.getParcelableArrayList("android.people.list")) != null && !parcelableArrayList.isEmpty()) {
                it = parcelableArrayList.iterator();
                while (it.hasNext()) {
                    notificationCompat$Builder.f1448c.add(m.b(u3.e.c(it.next())));
                }
            }
            i5 = Build.VERSION.SDK_INT;
            if (bundle4.containsKey("android.chronometerCountDown")) {
                notificationCompat$Builder.d().putBoolean("android.chronometerCountDown", bundle4.getBoolean("android.chronometerCountDown"));
            }
            if (i5 >= 26 && bundle4.containsKey("android.colorized")) {
                notificationCompat$Builder.f1469z = bundle4.getBoolean("android.colorized");
                notificationCompat$Builder.A = true;
            }
            if (i5 >= 36 || !bundle4.containsKey("android.shortCriticalText")) {
            }
            String string = bundle4.getString("android.shortCriticalText");
            notificationCompat$Builder.f1452g = string;
            if (i5 < 36) {
                notificationCompat$Builder.d().putString("android.shortCriticalText", string);
                return;
            }
            return;
        }
        b0Var = null;
        this.M = b0Var;
        this.f1455l = notification.number;
        this.N.tickerText = e(notification.tickerText);
        this.f1453h = notification.contentIntent;
        this.N.deleteIntent = notification.deleteIntent;
        PendingIntent pendingIntent3 = notification.fullScreenIntent;
        if ((notification.flags & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
        }
        this.f1454i = pendingIntent3;
        g(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, z5);
        Uri uri2 = notification.sound;
        int i122 = notification.audioStreamType;
        Notification notification22 = this.N;
        notification22.sound = uri2;
        notification22.audioStreamType = i122;
        notification22.audioAttributes = c0.a(c0.d(c0.c(c0.b(), 4), i122));
        this.N.vibrate = notification.vibrate;
        i(notification.ledARGB, notification.ledOnMS, notification.ledOffMS);
        f(notification.defaults);
        this.f1456m = notification.priority;
        this.D = notification.color;
        this.E = notification.visibility;
        this.F = notification.publicVersion;
        this.f1467x = notification.getSortKey();
        this.K = i11 < 26 ? notification.getTimeoutAfter() : 0L;
        this.I = i11 < 26 ? notification.getShortcutId() : null;
        int i132 = bundle4.getInt("android.progressMax");
        int i142 = bundle4.getInt("android.progress");
        boolean z62 = bundle4.getBoolean("android.progressIndeterminate");
        this.f1462s = i132;
        this.f1463t = i142;
        this.f1464u = z62;
        this.L = i11 < 29 ? g.b(notification) : false;
        int i152 = notification.icon;
        int i162 = notification.iconLevel;
        Notification notification32 = this.N;
        notification32.icon = i152;
        notification32.iconLevel = i162;
        if (notification.extras != null) {
        }
        notificationCompat$Builder.b(bundle);
        notificationCompat$Builder.P = x0.d0.b(notification);
        a = x0.d0.a(notification);
        if (a != null) {
        }
        actionArr = notification.actions;
        if (actionArr != null) {
            length = actionArr.length;
            i10 = 0;
            while (i10 < length) {
            }
        }
        arrayList = new ArrayList();
        bundle2 = notification.extras.getBundle(str2);
        if (bundle2 != null) {
            while (i6 < bundle3.size()) {
            }
        }
        if (!arrayList.isEmpty()) {
        }
        stringArray = notification.extras.getStringArray(str);
        if (stringArray != null) {
            while (r13 < r3) {
            }
        }
        if (Build.VERSION.SDK_INT >= 28) {
            it = parcelableArrayList.iterator();
            while (it.hasNext()) {
            }
        }
        i5 = Build.VERSION.SDK_INT;
        if (bundle4.containsKey("android.chronometerCountDown")) {
        }
        if (i5 >= 26) {
            notificationCompat$Builder.f1469z = bundle4.getBoolean("android.colorized");
            notificationCompat$Builder.A = true;
        }
        if (i5 >= 36) {
        }
    }
}

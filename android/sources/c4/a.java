package c4;

import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import kotlin.jvm.internal.Intrinsics;
import v3.p;

/* loaded from: classes.dex */
public final class a extends f {

    /* renamed from: f, reason: collision with root package name */
    public final d f3301f;

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f3302g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(Context context, h4.b taskExecutor, int i5) {
        super(context, taskExecutor);
        this.f3302g = i5;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(taskExecutor, "taskExecutor");
        this.f3301f = new d(0, this);
    }

    /* JADX WARN: Code restructure failed: missing block: B:14:0x0036, code lost:
    
        if (r0.equals("android.intent.action.DEVICE_STORAGE_OK") == false) goto L20;
     */
    @Override // c4.f
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object a() {
        switch (this.f3302g) {
            case 0:
                Intent registerReceiver = this.f3304b.registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
                if (registerReceiver == null) {
                    p.d().b(b.a, "getInitialState - null intent received");
                    return Boolean.FALSE;
                }
                int intExtra = registerReceiver.getIntExtra("status", -1);
                return Boolean.valueOf(intExtra == 2 || intExtra == 5);
            case 1:
                Intent registerReceiver2 = this.f3304b.registerReceiver(null, new IntentFilter("android.intent.action.BATTERY_CHANGED"));
                if (registerReceiver2 == null) {
                    p.d().b(c.a, "getInitialState - null intent received");
                    return Boolean.FALSE;
                }
                int intExtra2 = registerReceiver2.getIntExtra("status", -1);
                float intExtra3 = registerReceiver2.getIntExtra("level", -1) / registerReceiver2.getIntExtra("scale", -1);
                boolean z5 = true;
                if (intExtra2 != 1 && intExtra3 <= 0.15f) {
                    z5 = false;
                }
                return Boolean.valueOf(z5);
            default:
                Intent registerReceiver3 = this.f3304b.registerReceiver(null, e());
                boolean z6 = true;
                if (registerReceiver3 != null && registerReceiver3.getAction() != null) {
                    String action = registerReceiver3.getAction();
                    if (action != null) {
                        int hashCode = action.hashCode();
                        if (hashCode == -1181163412) {
                            action.equals("android.intent.action.DEVICE_STORAGE_LOW");
                        } else if (hashCode == -730838620) {
                            break;
                        }
                    }
                    z6 = false;
                }
                return Boolean.valueOf(z6);
        }
    }

    @Override // c4.f
    public final void c() {
        p.d().a(e.a, getClass().getSimpleName().concat(": registering receiver"));
        this.f3304b.registerReceiver(this.f3301f, e());
    }

    @Override // c4.f
    public final void d() {
        p.d().a(e.a, getClass().getSimpleName().concat(": unregistering receiver"));
        this.f3304b.unregisterReceiver(this.f3301f);
    }

    public final IntentFilter e() {
        switch (this.f3302g) {
            case 0:
                IntentFilter intentFilter = new IntentFilter();
                intentFilter.addAction("android.os.action.CHARGING");
                intentFilter.addAction("android.os.action.DISCHARGING");
                return intentFilter;
            case 1:
                IntentFilter intentFilter2 = new IntentFilter();
                intentFilter2.addAction("android.intent.action.BATTERY_OKAY");
                intentFilter2.addAction("android.intent.action.BATTERY_LOW");
                return intentFilter2;
            default:
                IntentFilter intentFilter3 = new IntentFilter();
                intentFilter3.addAction("android.intent.action.DEVICE_STORAGE_OK");
                intentFilter3.addAction("android.intent.action.DEVICE_STORAGE_LOW");
                return intentFilter3;
        }
    }
}

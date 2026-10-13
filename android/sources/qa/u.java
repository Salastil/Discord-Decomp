package qa;

import android.util.SparseIntArray;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import org.webrtc.PeerConnection;

/* loaded from: classes3.dex */
public final class u {
    public final w a;

    /* renamed from: b, reason: collision with root package name */
    public final s f16719b;

    /* renamed from: c, reason: collision with root package name */
    public final w f16720c;

    /* renamed from: d, reason: collision with root package name */
    public final r8.c f16721d;

    /* renamed from: e, reason: collision with root package name */
    public final w f16722e;

    /* renamed from: f, reason: collision with root package name */
    public final s f16723f;

    /* renamed from: g, reason: collision with root package name */
    public final w f16724g;

    /* renamed from: h, reason: collision with root package name */
    public final s f16725h;

    /* renamed from: i, reason: collision with root package name */
    public final String f16726i;
    public final int j;

    public u(t tVar) {
        ta.a.D();
        this.a = j.a();
        this.f16719b = s.z();
        int i5 = k.a;
        int i6 = i5 * 4194304;
        SparseIntArray sparseIntArray = new SparseIntArray();
        for (int i10 = 131072; i10 <= 4194304; i10 *= 2) {
            sparseIntArray.put(i10, i5);
        }
        this.f16720c = new w(4194304, i6, sparseIntArray, k.a);
        this.f16721d = r8.c.t();
        SparseIntArray sparseIntArray2 = new SparseIntArray();
        sparseIntArray2.put(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET, 5);
        sparseIntArray2.put(RecyclerView.ItemAnimator.FLAG_MOVED, 5);
        sparseIntArray2.put(RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT, 5);
        sparseIntArray2.put(8192, 5);
        sparseIntArray2.put(16384, 5);
        sparseIntArray2.put(PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS, 5);
        sparseIntArray2.put(KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT, 5);
        sparseIntArray2.put(KeyCommandDescriptor.ModifierFlags.SHIFT, 5);
        sparseIntArray2.put(KeyCommandDescriptor.ModifierFlags.CONTROL, 2);
        sparseIntArray2.put(KeyCommandDescriptor.ModifierFlags.ALTERNATE, 2);
        sparseIntArray2.put(KeyCommandDescriptor.ModifierFlags.COMMAND, 2);
        int min = (int) Math.min(Runtime.getRuntime().maxMemory(), 2147483647L);
        int i11 = min < 16777216 ? 3145728 : min < 33554432 ? 6291456 : 12582912;
        int min2 = (int) Math.min(Runtime.getRuntime().maxMemory(), 2147483647L);
        this.f16722e = new w(i11, min2 < 16777216 ? min2 / 2 : (min2 / 4) * 3, sparseIntArray2, -1);
        this.f16723f = s.z();
        w wVar = (w) tVar.f16718e;
        if (wVar == null) {
            SparseIntArray sparseIntArray3 = new SparseIntArray();
            sparseIntArray3.put(16384, 5);
            wVar = new w(81920, KeyCommandDescriptor.ModifierFlags.COMMAND, sparseIntArray3, -1);
        }
        this.f16724g = wVar;
        this.f16725h = s.z();
        this.f16726i = "legacy";
        this.j = 4194304;
        ta.a.D();
    }
}
